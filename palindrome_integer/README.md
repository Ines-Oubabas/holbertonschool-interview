# Palindrome Check - C Project

This project contains a function that checks whether a given unsigned integer is a palindrome.

## 📌 Requirements

- Allowed editors: `vi`, `vim`, `emacs`
- Ubuntu 14.04 LTS
- GCC 4.8.4 with flags:
  - `-Wall -Werror -Wextra -pedantic`
- Code follows **Betty style** (verified with `betty-style.pl` and `betty-doc.pl`)
- No global variables
- No dynamic memory allocation (malloc, calloc, realloc, etc.)
- Maximum 5 functions per file

## 🚀 Task 0: Palindrome unsigned integer

Write a function that checks whether or not a given unsigned integer is a palindrome.

### Prototype
```c
int is_palindrome(unsigned long n);

Return
1 if n is a palindrome
0 otherwise

Example
$ ./palindrome 121
121 is a palindrome.

$ ./palindrome 112
112 is not a palindrome.
📂 File Structure
0-is_palindrome.c: The function implementation

palindrome.h: The header file (with include guards and prototypes)

✅ Usage
Compile:
gcc -Wall -Wextra -Werror -pedantic -g3 -o palindrome 0-main.c 0-is_palindrome.c

Run:
./palindrome <number>

Example:
./palindrome 12321

Betty check:
betty 0-is_palindrome.c palindrome.h
Project created as part of Holberton School Interview Projects.
EOF
