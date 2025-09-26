#!/usr/bin/python3
""" Prime Game """

def sieve(max_n):
    """ Return a list indicating if numbers <= max_n are prime """
    is_prime = [False, False] + [True] * (max_n - 1)
    for i in range(2, int(max_n ** 0.5) + 1):
        if is_prime[i]:
            for j in range(i * i, max_n + 1, i):
                is_prime[j] = False
    return is_prime


def isWinner(x, nums):
    """ Determines the winner of the Prime Game """
    if x == 0 or not nums:
        return None

    max_n = max(nums)
    primes = sieve(max_n)

    prime_count = [0] * (max_n + 1)
    for i in range(1, max_n + 1):
        prime_count[i] = prime_count[i - 1] + (1 if primes[i] else 0)

    Maria_wins = 0
    Ben_wins = 0

    for n in nums:
        if n < 2:
            Ben_wins += 1
        elif prime_count[n] % 2 != 0:
            Maria_wins += 1
        else:
            Ben_wins += 1

    if Maria_wins > Ben_wins:
        return "Maria"
    if Ben_wins > Maria_wins:
        return "Ben"
    return None
