#!/usr/bin/python3
"""
0-making_change.py

Compute the fewest number of coins needed to reach a given total.

Prototype: def makeChange(coins, total)
- Return the fewest number of coins needed to meet total
- If total is 0 or less, return 0
- If total cannot be met by any number of coins you have, return -1
- coins is a list of the values of the coins in your possession
- You can assume you have an infinite number of each denomination
"""

def makeChange(coins, total):
    """
    Determine the minimal number of coins needed to reach `total`.

    Args:
        coins (list): Positive integer coin denominations.
        total (int): Target sum.

    Returns:
        int: Fewest coins to meet `total`, or -1 if impossible.
    """
    if total <= 0:
        return 0
    if not coins:
        return -1

    # Large sentinel (greater than any possible minimal coin count)
    sentinel = total + 1
    dp = [sentinel] * (total + 1)
    dp[0] = 0

    # Unbounded knapsack / coin change (min coins) DP
    for c in coins:
        if c <= 0:
            # Problem statement guarantees > 0, but be defensive
            continue
        for t in range(c, total + 1):
            # If we can form (t - c), try taking one more coin of value c
            if dp[t - c] + 1 < dp[t]:
                dp[t] = dp[t - c] + 1

    return dp[total] if dp[total] != sentinel else -1
