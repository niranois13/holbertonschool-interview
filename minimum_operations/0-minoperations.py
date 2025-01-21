#!/usr/bin/python3
'''Compiled with Python3'''


def minOperations(n):
    '''
    Given a text file with a single character H and only two operations:
    `Copy All` and `Paste` and given a number `n`,
    Method that calculates the fewest number of operations needed
    to result in exactly n H characters in the file.
    :param n: int - the number of times we want the character H to be in file.
    :return: int, the number of operations needed.
    '''
    operations = 0
    multiple = 2

    if n <= 1:
        return operations

    while n > 1:
        while n % multiple == 0:
            operations += multiple
            n //= multiple
        multiple += 1
    return operations
