#!/usr/bin/python3
"""
utf8_validation module
"""


def validUTF8(data):
    """
    Function that checks if a given list is valid UTF-8 o not
    :param data: list of int - the list to be checked
    Returns: True if valid UTF-8, False otherwise
    """
    is_valid = True
    try:
        bytes(data).decode('utf-8')
    except Exception:
        is_valid = False

    return is_valid
