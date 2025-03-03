# UTF-8 Validation

![UTF-8 validation](https://i.imgur.com/Hp8Oegv.png)

- [UTF-8 Validation](#utf-8-validation)
  - [Description](#description)
  - [Prototype](#prototype)
  - [Requirements](#requirements)
  - [Compilation \& Execution](#compilation--execution)
  - [Files](#files)


## Description
This project implements a function to determine if a given dataset represents a valid UTF-8 encoding. UTF-8 encoding can represent characters using 1 to 4 bytes, and this function ensures that the provided dataset conforms to UTF-8 encoding rules.

## Prototype
```
def validUTF8(data):
```

## Requirements
- The function must return `True` if the data is a valid UTF-8 encoding, otherwise return `False`.
- A character in UTF-8 can be 1 to 4 bytes long.
- The dataset may contain multiple characters.
- Each integer in the dataset represents **one byte** (8 least significant bits).

## Compilation & Execution
To run the script:
```
chmod +x 0-main.py
./0-main.py
```

## Files
- `0-validate_utf8.py` - Contains the function implementation.
- `0-main.py` - Contains the test cases to verify the function.
