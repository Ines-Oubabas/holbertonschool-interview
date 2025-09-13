# Find the loop

## Description
Ce projet fait partie du programme **Holberton School Interview Preparation**.  
Il consiste à implémenter une fonction en C qui détecte un cycle (loop) dans une liste chaînée simple et retourne le nœud où commence ce cycle.

## Prototype
```c
listint_t *find_listint_loop(listint_t *head);
head : pointeur vers le début de la liste.

Return :

Adresse du nœud où le cycle commence.

NULL s’il n’y a pas de cycle.

Contraintes
Aucun usage de fonctions de la bibliothèque standard (printf, malloc, free, etc.).

Pas de variables globales.

Maximum 2 variables déclarées dans la fonction.

Respect du style Betty.

Fichiers compilés sur Ubuntu 14.04 LTS avec gcc 4.8.4 et les flags :

bash
Copier le code
-Wall -Werror -Wextra -pedantic
Tous les fichiers doivent se terminer par une nouvelle ligne.

Compilation
Avec la bibliothèque fournie :

bash
Copier le code
gcc -Wall -Werror -Wextra -pedantic 0-main.c 0-find_loop.c -L. -lloop -o main
Ou avec le fichier source de remplacement :

bash
Copier le code
gcc -Wall -Werror -Wextra -pedantic 0-main.c 0-find_loop.c lib.c -o main
Exemple d’exécution
bash
Copier le code
$ ./main
[0x13700f0] 1024
[0x1370540] 402
[0x1370010] 98
[0x1370030] 7
...
-> [0x1370030] 7
Loop starts at [0x1370030] 7
Repository
GitHub repository: holbertonschool-interview

Directory: find_the_loop

File: 0-find_loop.c