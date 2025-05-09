# Linked List Palindrome

## Description

This project focuses on determining whether a singly linked list is a palindrome.  
It is part of the Holberton School interview preparation series.

---

## Requirements

- Allowed editors: **vi**, **vim**, **emacs**
- OS: **Ubuntu 14.04 LTS**
- Compiler: **gcc 4.8.4** with flags: `-Wall -Werror -Wextra -pedantic`
- Coding style: **Betty style** (`betty-style.pl` and `betty-doc.pl`)
- No global variables allowed
- Maximum of 5 functions per file
- Header file: `lists.h` (must include all function prototypes and be guarded)

---

## Function Prototype

```c
int is_palindrome(listint_t **head);
````

* **Return:**

  * `1` if the linked list is a palindrome
  * `0` if it is not
* An empty list is considered a palindrome.

---

## Data Structures

```c
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;
```

---

## Compilation Example

```bash
gcc -Wall -Werror -Wextra -pedantic 0-main.c linked_lists.c 0-is_palindrome.c -o palindrome
./palindrome
```

---

## Example Output

```
1
17
972
50
98
98
50
972
17
1
Linked list is a palindrome
```

---

## Files

* `lists.h`: Header file with the struct and function prototypes.
* `linked_lists.c`: Contains helper functions to manipulate the linked list.
* `0-is_palindrome.c`: Function to check if a singly linked list is a palindrome.
* `0-main.c`: Example main file to test the implementation (not required to be pushed).

---

## Author

Holberton School Interview Preparation Project
