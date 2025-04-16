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

📁 File Structure

File Name	Description
0-binary_tree_node.c	Creates a new binary tree node.
1-heap_insert.c	Inserts a value in a Max Binary Heap.
binary_trees.h	Header file with structure definitions and prototypes.
README.md	Project documentation (this file).
✏️ Function Prototypes
c
Copy
Edit
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
heap_t *heap_insert(heap_t **root, int value);
void binary_tree_print(const binary_tree_t *); /* Provided for testing only */
🔧 Compilation
All files are compiled on Ubuntu 14.04 LTS using:

bash
Copy
Edit
gcc -Wall -Wextra -Werror -pedantic
Example command to compile the task 1 with test files:

bash
Copy
Edit
gcc 1-main.c 1-heap_insert.c 0-binary_tree_node.c binary_tree_print.c -o 1-heap_insert
./1-heap_insert
✅ Requirements
No more than 5 functions per file (6 allowed in Task 1)

No use of global variables

All files must end with a new line

Header files must be guarded

Must follow Betty style

Only the standard C library is allowed

🧪 Example Output
css
Copy
Edit
Inserted: 98
(098)

Inserted: 402
  .--(402)
(098)

Inserted: 12
  .--(402)--.
(098)     (012)

Inserted: 46
       .--(402)--.
  .--(098)     (012)
(046)

Inserted: 128
       .-------(402)--.
  .--(128)--.       (012)
(046)     (098)

Inserted: 256
       .-------(402)-------.
  .--(128)--.         .--(256)
(046)     (098)     (012)

Inserted: 512
       .-------(512)-------.
  .--(128)--.         .--(402)--.
(046)     (098)     (012)     (256)

Inserted: 50
            .-------(512)-------.
       .--(128)--.         .--(402)--.
  .--(050)     (098)     (012)     (256)
(046)
👨‍💻 Author
Project completed as part of the Low-level programming & Algorithm curriculum at Holberton School.

yaml
Copy
Edit
