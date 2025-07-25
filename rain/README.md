# Rain

## Description

This project implements a function that calculates how much water will be retained between walls of varying heights after it rains.

It simulates the cross-sectional view of a relief map using a list of non-negative integers, where each integer represents the height of a wall of unit width.

The algorithm follows an optimized two-pointer approach to compute the amount of water trapped in linear time and constant space.

---

## Requirements

- Allowed editors: `vi`, `vim`, `emacs`
- All files interpreted/compiled on Ubuntu 14.04 LTS using `python3` (version 3.4.3)
- No imports allowed
- Code must follow **PEP8** style (version 1.7.x)
- All files must end with a new line and be executable
- The first line of each file should be `#!/usr/bin/python3`
- A `README.md` file is mandatory

---

## File Descriptions

- **`0-rain.py`**: Contains the `rain` function that calculates trapped rainwater.
- **`0_main.py`**: Main script to test the `rain` function with example inputs.

---

## Function Prototype

```python
def rain(walls):
    """
    walls: list of non-negative integers
    Return: Integer indicating total amount of rainwater retained
    """

Example
bash
Copier
Modifier
$ ./0_main.py
6
6
For example, given the input:
[0, 1, 0, 2, 0, 3, 0, 4]
The output is: 6

Author
Project done as part of the Holberton School Interview Preparation Series.