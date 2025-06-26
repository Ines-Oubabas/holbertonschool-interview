# 0x08. N Queens

## Description
This project solves the classic "N Queens" puzzle using backtracking.

The goal is to place N queens on an NxN chessboard so that no two queens attack each other.

## Usage
```bash
./0-nqueens.py N
Where N:

Must be a number greater than or equal to 4

If not, an error message is displayed

Example
bash
Copier
Modifier
./0-nqueens.py 4
[[0, 1], [1, 3], [2, 0], [3, 2]]
[[0, 2], [1, 0], [2, 3], [3, 1]]
Requirements
Python 3.4.3

Only sys module allowed

Code follows PEP8

yaml
Copier
Modifier

---

## ⚙️ Commandes à exécuter pour tester

### 1. Rendre le fichier exécutable
```bash
chmod +x 0-nqueens.py
2. Exécuter avec un N donné (par exemple N = 4)
bash
Copier
Modifier
./0-nqueens.py 4
3. Exemples de vérification des erreurs
bash
Copier
Modifier
./0-nqueens.py       # ➜ Usage: nqueens N
./0-nqueens.py 2     # ➜ N must be at least 4
./0-nqueens.py test  # ➜ N must be a number