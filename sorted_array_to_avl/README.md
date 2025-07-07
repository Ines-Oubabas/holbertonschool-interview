# Sorted Array to AVL Tree

## Description

This project implements a function that builds an AVL tree from a **sorted array of integers**.

The AVL tree is created in a **recursive** manner without performing any rotations. The goal is to construct a **balanced binary search tree** directly from the sorted input array.

This project is part of the **Holberton School interview preparation** track.

## Files

- `0-sorted_array_to_avl.c`: Contains the main logic to convert a sorted array into an AVL tree.
- `binary_trees.h`: Header file containing the necessary data structures and function prototypes.
- `0-main.c`: Example main file (used for local testing only).
- `binary_tree_print.c`: Utility function to print the tree visually (used for testing only).

## Prototype

```c
avl_t *sorted_array_to_avl(int *array, size_t size);
Compilation
All files are compiled on Ubuntu 14.04 LTS using:

bash
Copier le code
gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 0-main.c 0-sorted_array_to_avl.c -o 0-sorted_array_to_avl
Usage
Example execution:

bash
Copier le code
./0-sorted_array_to_avl
(001)(002)(020)(021)(022)(032)(034)(047)(062)(068)(079)(084)(087)(091)(095)(098)
                 .-----------------(047)-----------------.
       .-------(021)-------.                   .-------(084)-------.
  .--(002)--.         .--(032)--.         .--(068)--.         .--(091)--.
(001)     (020)     (022)     (034)     (062)     (079)     (087)     (095)--.
                                                                    