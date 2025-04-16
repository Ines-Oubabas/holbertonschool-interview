# Heap Insert

## 📚 Description

This project focuses on binary tree operations, particularly on implementing a **Max Binary Heap** in C. The goal is to create and insert nodes while respecting the structure and properties of a Max Heap.

---

## 🧱 Data Structures

```c
typedef struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
} binary_tree_t;

typedef struct binary_tree_s heap_t;
binary_tree_t: Generic binary tree node.

heap_t: Alias for a Max Binary Heap node.
```

## 📁 File Structure

File Name	Description
0-binary_tree_node.c	Creates a new binary tree node.
1-heap_insert.c	Inserts a value in a Max Binary Heap.
binary_trees.h	Header file with structure definitions and prototypes.
README.md	Project documentation (this file).
