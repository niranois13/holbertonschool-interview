# Prime Game

![cursed card game](https://i.imgur.com/NRsxm3J.jpeg)

## Description
Maria and Ben are playing a game with a set of consecutive integers starting from `1` up to and including `n`.  
- Players take turns choosing a prime number from the set.  
- The chosen prime and all its multiples are removed.  
- The player who cannot make a move loses the round.  

They play `x` rounds of the game, where `n` may vary in each round.  
Maria always goes first, and both players play optimally.

Your task is to implement a function that determines the overall winner after all rounds.

---

## Function Prototype
```
def isWinner(x, nums):
    """
    Determines the winner of the Prime Game.

    Args:
        x (int): number of rounds
        nums (list): list of n values for each round

    Returns:
        str: "Maria" if Maria wins more rounds,
             "Ben" if Ben wins more rounds,
             None if no winner can be determined
    """
```

## Example
```
x = 3
nums = [4, 5, 1]

# Round 1 (n = 4):
# Maria picks 2 → removes 2,4 → set = {1,3}
# Ben picks 3 → removes 3 → set = {1}
# Ben wins

# Round 2 (n = 5):
# Maria picks 2 → removes 2,4 → set = {1,3,5}
# Ben picks 3 → removes 3 → set = {1,5}
# Maria picks 5 → removes 5 → set = {1}
# Maria wins

# Round 3 (n = 1):
# No primes available → Ben wins

# Final Result: Ben has 2 wins, Maria has 1 → Winner = "Ben"
```

## Usage
Test with the provided main file:

$ cat main_0.py
#!/usr/bin/python3

isWinner = __import__('0-prime_game').isWinner

print("Winner: {}".format(isWinner(5, [2, 5, 1, 4, 3])))