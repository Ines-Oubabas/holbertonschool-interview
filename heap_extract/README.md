# Heap Extract (Max Binary Heap)

Function to extract the **root value** of a **Max Binary Heap** stored as a binary tree.

## Requirements

- Allowed editors: `vi`, `vim`, `emacs`
- OS: Ubuntu 14.04 LTS
- Compiler: `gcc 4.8.4` with flags `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All files end with a new line
- A `README.md` at the root of the project folder
- Betty style + documentation: `betty-style.pl` and `betty-doc.pl`
- **No global variables**
- **≤ 5 functions per file**
- You may use the standard library
- All function prototypes declared in `binary_trees.h`
- Header files must be include-guarded

## Data structures

```c
/**
 * struct binary_tree_s - Binary tree node
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
typedef struct binary_tree_s heap_t; /* Max Binary Heap */

Prototype
int heap_extract(heap_t **root);


Behavior

Returns the value stored in the root node.

The root node is freed and replaced by the last node in level order.

Then the heap property is restored (sift-down).

On failure, returns 0.

Files in this directory

0-heap_extract.c — implementation of heap_extract

binary_trees.h — data structures + prototypes

binary_tree_print.c — helper to visualize the tree (for local testing only)

0-main.c — example main (do not push)

libheap.a — testing library provided by the project (not used for correction)

The checker will compile with its own main; keep only the required files in your repo.

Build & run (local)
# from holbertonschool-interview/heap_extract
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -I. \
  -o 0-heap_extract 0-main.c 0-heap_extract.c binary_tree_print.c \
  -L. -lheap

./0-heap_extract


Optional (leak check):

valgrind ./0-heap_extract


If you see cannot find -lheap, make sure libheap.a is present in the current directory.

Algorithm (high level)

If the heap is empty → return 0.

Save root value to return later.

Compute the size (node count) of the tree.

Find the last node in level order using 1-based array indexing traversal.

Replace root’s value with last node’s value, unlink and free the last node.

Heapify down (swap with the larger child while violated) until the heap property holds.

Return the saved value.

Complexity

tree_size: O(n)

node_at_index: O(h) ≈ O(log n) (height traversal)

heapify_down: O(log n)

Overall worst case: O(n) due to the size computation.