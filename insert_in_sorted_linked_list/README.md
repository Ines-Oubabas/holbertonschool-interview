# 📌 Insert in Sorted Linked List

This project is part of the **technical interview preparation** at Holberton School.

It consists of writing a C function that inserts a number into a **sorted singly linked list** while keeping the list in **ascending order**.

---

## 🧠 Objective

- Practice manipulating singly linked lists in C
- Learn how to traverse and modify linked structures
- Maintain the sorted property of a data structure

---

## 📝 Function Prototype

listint_t *insert_node(listint_t **head, int number);

- `head`: double pointer to the head of the list  
- `number`: the integer to insert in the correct position  
- **Return**: address of the new node, or `NULL` if it failed

---

## 🧱 Project Structure

insert_in_sorted_linked_list/
├── 0-insert_number.c     # Your function implementation
├── 0-main.c              # Test file provided for validation
├── linked_lists.c        # Helper functions (print, free, add)
├── lists.h               # Header file with struct & prototypes
└── README.md             # Project documentation

---

## ✅ Compilation

To compile the project:

gcc -Wall -Werror -Wextra -pedantic 0-main.c linked_lists.c 0-insert_number.c -o insert

To run the executable:

./insert

---

## 🧪 Example Output

Before insertion:

0  
1  
2  
3  
4  
98  
402  
1024  

After inserting `27`:

0  
1  
2  
3  
4  
27  
98  
402  
1024  

---

## 🔒 Constraints

- No more than 5 functions per file
- No use of global variables
- Code must follow **Betty style**
- All header files must be included and guarded
- All memory must be properly allocated and freed

---

## 👩‍💻 Author

✨ *Written with ❤️ by Ines Oubabas – Holberton School Project*
