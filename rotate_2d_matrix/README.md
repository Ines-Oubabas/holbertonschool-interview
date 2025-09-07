# Rotate 2D Matrix

## Description
Ce projet contient une fonction Python qui permet de faire une rotation d’une matrice carrée (n x n) de 90 degrés dans le sens des aiguilles d’une montre.  
La rotation est effectuée **en place**, sans retourner de nouvelle matrice.

## Requirements
- Éditeur autorisé : `vi`, `vim`, `emacs`
- Interprété/compilé sous : **Ubuntu 14.04 LTS** avec **python3 (version 3.4.3)**
- Style de code : **PEP 8 (version 1.7.x)**
- Tous les fichiers doivent être exécutables
- La première ligne de chaque fichier doit être :  
  ```bash
  #!/usr/bin/python3
Prototype

def rotate_2d_matrix(matrix):
    """
    Rotates an n x n 2D matrix 90 degrees clockwise in-place.
    """
Exemple d’utilisation
Fichier main_0.py :

#!/usr/bin/python3
"""
Test - Rotate 2D Matrix
"""
rotate_2d_matrix = __import__('0-rotate_2d_matrix').rotate_2d_matrix

if __name__ == "__main__":
    matrix = [[1, 2, 3],
              [4, 5, 6],
              [7, 8, 9]]

    rotate_2d_matrix(matrix)
    print(matrix)
Résultat attendu :

bash

[[7, 4, 1],
 [8, 5, 2],
 [9, 6, 3]]
Repository
GitHub repository: holbertonschool-interview

Directory: rotate_2d_matrix

File: 0-rotate_2d_matrix.py