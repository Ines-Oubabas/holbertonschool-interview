# Double Circular Linked List

## Description
Projet **Holberton School – Interview** :  
Implémentation d’une **liste doublement chaînée circulaire** en C.  
Deux fonctions : ajouter un nœud au **début** ou à la **fin**.

## Data Structure
```c
typedef struct List
{
    char *str;
    struct List *prev;
    struct List *next;
} List;
Files
list.h → Header avec struct + prototypes

0-add_node.c → Fonctions d’ajout

0-main.c → Tests (fourni)

Functions
c
Copier le code
List *add_node_end(List **list, char *str);
List *add_node_begin(List **list, char *str);
Compilation
bash
Copier le code
gcc -Wall -Wextra -Werror -pedantic 0-main.c 0-add_node.c -o dcll
./dcll
Repository
GitHub: holbertonschool-interview

Directory: double_circular_linked_list

Files: list.h, 0-add_node.c