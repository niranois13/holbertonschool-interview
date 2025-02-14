# Log Parsing Script

![log_parsing](https://i.imgur.com/J1jBbm3.png)

## Description
This script reads lines from standard input (stdin) and computes specific metrics based on the parsed log data. It expects log lines to follow a strict format and extracts key metrics, including total file size and the count of various HTTP status codes. The script outputs statistics every 10 lines processed and also on receiving a keyboard interruption (CTRL + C).

## Input Format
Each input line should be structured as follows:
```
<IP Address> - [<date>] "GET /projects/260 HTTP/1.1" <status code> <file size>
```
Where:
- `<IP Address>` is an IPv4 address.
- `<date>` represents the timestamp.
- `<status code>` is one of: `200, 301, 400, 401, 403, 404, 405, 500`.
- `<file size>` is an integer representing the file size.

If a line does not match this format, it will be skipped.

## Output Format
The script outputs statistics after processing every 10 lines or upon receiving a keyboard interruption:
```
File size: <total size>
<status code>: <count>
...
```
- `<total size>` is the cumulative sum of valid `<file size>` values.
- Each `<status code>` count appears only if present in the logs and is displayed in ascending order.

### Example Output
```
File size: 5213
200: 2
401: 1
403: 2
404: 1
405: 1
500: 3
```

## Usage
To run the script, pipe input from a log generator or a file:
```
$ ./0-generator.py | ./0-stats.py
```
Or manually provide input:
```
$ cat logs.txt | ./0-stats.py
```

## Handling Keyboard Interrupts
When the script receives a `CTRL + C` signal, it prints the latest statistics before terminating:
```
^CFile size: 17146
200: 4
301: 3
400: 4
401: 2
403: 6
404: 6
405: 4
500: 4
```

## Notes
- The script should handle large input streams efficiently.
- Invalid lines will be ignored.
- The status codes are displayed in ascending order.
- The output format remains consistent for easy parsing and automation.

