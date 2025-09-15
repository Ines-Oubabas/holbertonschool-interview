# Merge Sort

## Description
Implémentation de l’algorithme **Merge Sort** (tri fusion) en C, dans le cadre du projet *holbertonschool-interview*.  
Le programme trie un tableau d’entiers en ordre croissant en utilisant l’approche **top-down** (division récursive en sous-tableaux puis fusion).  
Pendant l’exécution, les étapes de fusion sont affichées.

## Files
- `0-merge_sort.c` → implémentation de `merge_sort`
- `sort.h` → header avec les prototypes
- `0-O` → fichier texte avec les complexités en Big O
- `print_array.c` → fourni, utilisé pour afficher les tableaux
- `0-main.c` → fichier de test (exemple)

## Compilation
```bash
gcc -Wall -Wextra -Werror -pedantic 0-main.c 0-merge_sort.c print_array.c -o merge
Usage
bash
Copier le code
./merge
Exemple de sortie attendue :

markdown
Copier le code
19, 48, 99, 71, 13, 52, 96, 73, 86, 7

Merging...
[left]: 19
[right]: 48
[Done]: 19, 48
...
7, 13, 19, 48, 52, 71, 73, 86, 96, 99
Complexity
Best case: O(nlog(n))

Average case: O(nlog(n))

Worst case: O(nlog(n))
