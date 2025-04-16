# Heap Insert

## Description

This project implements basic operations on binary trees in C, focusing on **Max Binary Heaps**.

### Task 0: New Node

- Implements the function `binary_tree_node` to create a new binary tree node.
- The node is initialized with a given value and parent, with its children set to `NULL`.

---

## File structure

- `0-binary_tree_node.c` – Creates a binary tree node.
- `binary_trees.h` – Contains the structure definitions and function prototypes.
- `README.md` – This file.

---

## Requirements

- Allowed editors: `vi`, `vim`, `emacs`
- OS: Ubuntu 14.04 LTS
- Compiler: `gcc 4.8.4` with flags `-Wall -Werror -Wextra -pedantic`
- Code must follow Betty style
- No global variables
- No more than 5 functions per file

---

## Data Structures

```c
typedef struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
} binary_tree_t;

typedef struct binary_tree_s heap_t;

## Example Output
       .-------(098)-------.
  .--(012)--.         .--(402)--.
(006)     (016)     (256)     (512)
