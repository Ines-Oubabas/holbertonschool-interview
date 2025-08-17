# Count It!

## 📌 Description
Projet **Holberton School - Interview** :  
Ce projet implémente une fonction récursive en Python qui interroge l’API Reddit afin de compter les occurrences de mots-clés donnés dans les titres des articles **hot** d’un subreddit.

---

## ⚙️ Fonctionnalités
- Requête récursive sur l’API Reddit.
- Analyse des titres en **minuscules**.
- Comptage du nombre total d’occurrences de mots-clés.
- Gestion des doublons dans la liste des mots.
- Résultats triés :
  - Par **ordre décroissant du nombre d’occurrences**.
  - Puis par **ordre alphabétique** en cas d’égalité.
- Ignore les mots avec 0 occurrence.
- Rien n’est affiché si le subreddit est invalide.

---

## 🚀 Prototype
```python
def count_words(subreddit, word_list):

📥 Exemple d’utilisation
$ python3 0-main.py programming "react python java javascript scala no_results_for_this_one"

java: 27
javascript: 20
python: 17
react: 17
scala: 4

📂 Fichiers

0-count.py : Fonction count_words (implémentation principale).

0-main.py : Script de test fourni.

README.md : Documentation du projet.

✅ Contraintes

Ubuntu 14.04 LTS, Python 3.4.3

Respect de la norme PEP 8

Tous les fichiers doivent être exécutables

Utilisation du module Requests

Fonction récursive (pas de boucle)