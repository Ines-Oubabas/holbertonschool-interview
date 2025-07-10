# 0x0E. Linear Search in Skip List

## 📚 Description

Ce projet implémente une structure de données appelée **skip list** (liste chaînée avec voie express) et une fonction de **recherche linéaire optimisée** à l'aide de cette voie rapide. Il permet d'accélérer les recherches dans une liste triée, en réduisant le nombre d’éléments parcourus.

---

## 📁 Fichiers

| Fichier               | Rôle                                                                 |
|-----------------------|----------------------------------------------------------------------|
| `search.h`            | Définition de la structure `skiplist_t` et des prototypes            |
| `0-linear_skip.c`     | Fonction de recherche linéaire optimisée avec express lane           |
| `skiplist/create_skiplist.c` | Création de la skip list à partir d'un tableau             |
| `skiplist/print_skiplist.c`  | Affichage de la liste et de la voie express                |
| `skiplist/free_skiplist.c`   | Libération de la mémoire de la liste                       |

---

## 🔍 Fonction principale

### `linear_skip`

```c
skiplist_t *linear_skip(skiplist_t *list, int value);
Recherche une valeur dans une skip list triée.

Affiche chaque comparaison effectuée.

Retourne un pointeur vers le nœud contenant la valeur, ou NULL si elle n’est pas trouvée.

🧪 Compilation & Test
✅ Compiler :
bash
Copier
Modifier
gcc -Wall -Wextra -Werror -pedantic 0-main.c 0-linear_skip.c skiplist/*.c -lm -o 0-linear_skip
▶️ Exécuter :
bash
Copier
Modifier
./0-linear_skip
✅ Exemple de sortie
text
Copier
Modifier
List :
Index[0] = [0]
Index[1] = [1]
...
Express lane :
Index[0] = [0]
Index[4] = [4]
...

Value checked at index [4] = [4]
Value checked at index [8] = [18]
Value checked at index [12] = [61]
Value found between indexes [8] and [12]
Value checked at index [8] = [18]
...
Found 53 at index: 11
👤 Auteurs
Inès Oubabas - 🧠 Développement & Debugging

Projet réalisé dans le cadre du programme Holberton School / Actual