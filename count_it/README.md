# Reddit Keyword Counter

![count_it](https://i.imgur.com/h3sRbAn.png)

## Description

This project contains a recursive Python function that queries the Reddit API to retrieve hot article titles from a given subreddit and counts the occurrences of specified keywords. The results are case-insensitive and sorted by frequency and alphabetically.

## Features

* Connects to Reddit’s API using the `requests` library
* Parses hot article titles from a given subreddit
* Counts keyword occurrences (case-insensitive)
* Supports duplicate keywords in input
* Ignores keywords not found
* Outputs sorted counts (by frequency, then alphabetically)
* Uses **recursion only** (no loops)

## Function Prototype

```
def count_words(subreddit, word_list)
```

## Usage

To run the script:

```
$ ./0-main.py <subreddit> '<list of keywords>'
```

**Example:**

```
$ ./0-main.py programming 'react python java javascript scala'
```

## Requirements

* Python 3.4.3
* Ubuntu 14.04 LTS
* `requests` library
* Code must follow PEP8 style
* Files must be executable and end with a newline
* All modules must include documentation
* No loops allowed — **use recursion**
* Handle invalid subreddits by printing nothing

## Notes

* Keywords are case-insensitive.
* Words like `java.` or `java!` are ignored.
* Duplicate keywords in the list will be summed.
* No redirects should be followed for invalid subreddits.

## Example Output

```
$ ./0-main.py programming 'JavA java'
java: 54
```
