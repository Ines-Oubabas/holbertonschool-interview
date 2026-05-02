#!/usr/bin/python3
"""Prime Game module."""


def isWinner(x, nums):
    """Determine the winner of the Prime Game.

    Args:
        x (int): number of rounds
        nums (list): list of n values for each round

    Returns:
        str: "Maria", "Ben", or None
    """
    if x <= 0 or not nums:
        return None

    rounds = min(x, len(nums))
    max_n = max(nums[:rounds])

    if max_n < 2:
        return "Ben"

    is_prime = [True] * (max_n + 1)
    is_prime[0] = False
    is_prime[1] = False

    for number in range(2, max_n + 1):
        if is_prime[number]:
            for multiple in range(number * number, max_n + 1, number):
                is_prime[multiple] = False

    primes_count = [0] * (max_n + 1)
    count = 0

    for number in range(max_n + 1):
        if is_prime[number]:
            count += 1
        primes_count[number] = count

    maria_wins = 0
    ben_wins = 0

    for index in range(rounds):
        n = nums[index]

        if primes_count[n] % 2 == 1:
            maria_wins += 1
        else:
            ben_wins += 1

    if maria_wins > ben_wins:
        return "Maria"

    if ben_wins > maria_wins:
        return "Ben"

    return None
