# Making Change

## Description
Ce projet consiste à déterminer le **plus petit nombre de pièces** nécessaires pour atteindre un montant donné, en utilisant un ensemble de dénominations de pièces disponibles (en quantité infinie).  
Si le montant ne peut pas être atteint, la fonction retourne `-1`.  
Si le montant est `0` ou inférieur, la fonction retourne `0`.

---

## Prototype
```python
def makeChange(coins, total):
    """
    - coins: liste des valeurs des pièces disponibles (entiers > 0)
    - total: montant à atteindre (entier)

    Retourne :
    - le plus petit nombre de pièces nécessaires pour former total
    - -1 si ce n’est pas possible
    """
Exemple d’utilisation
bash
Copier le code
$ cat 0-main.py
#!/usr/bin/python3
"""
Exemple de test
"""

makeChange = __import__('0-making_change').makeChange

print(makeChange([1, 2, 25], 37))
print(makeChange([1256, 54, 48, 16, 102], 1453))

$ ./0-main.py
7
-1
