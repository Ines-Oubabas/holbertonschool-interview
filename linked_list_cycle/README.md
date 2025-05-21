# Linked List Cycle

## Description

This project is part of Holberton School's technical interview preparation.
It consists of implementing a function in C that checks whether a singly linked list contains a cycle.

---

## Requirements

- Allowed editors: `vi`, `vim`, `emacs`
- All files are compiled on **Ubuntu 14.04 LTS**
- Compilation is done with:  `gcc 4.8.4 -Wall -Werror -Wextra -pedantic`
- No global variables
- No more than **5 functions per file**
- Your code must follow the **Betty** style and will be checked with `betty-style.pl` and `betty-doc.pl`
- You must **include guards** in your header file
- Only the following functions are allowed:
  - `write`, `printf`, `putchar`, `puts`, `malloc`, `free`

---

## Files

| Filename           | Description                                      |
|--------------------|--------------------------------------------------|
| `lists.h`          | Header file containing the struct and prototypes |
| `0-check_cycle.c`  | Main function to check for a cycle in a linked list |
| `0-linked_lists.c` | Helper functions to add, print, and free a list  |
| `0-main.c`         | Main file to test the function (provided)        |

---

## Prototype

```c
int check_cycle(listint_t *list);
```

- Returns `1` if there is a cycle
- Returns `0` if there is no cycle

---

## Compilation

```bash
gcc -Wall -Werror -Wextra -pedantic 0-main.c 0-check_cycle.c 0-linked_lists.c -o cycle
./cycle
```

---

## Example Output

```
1024
402
98
4
3
2
1
0
Linked list has no cycle
Linked list has a cycle
```

---

## Author

Project by Holberton School students for interview preparation.
