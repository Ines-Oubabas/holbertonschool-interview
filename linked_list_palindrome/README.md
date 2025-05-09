linked_list_palindrome
🔹 #include "lists.h" et #include <stdlib.h>
#include "lists.h" : inclut le fichier d’en-tête avec la définition de listint_t (la structure de nœud de la liste).

#include <stdlib.h> : permet d’utiliser NULL, malloc, free, etc.

🔸 Fonction reverse_list
listint_t *reverse_list(listint_t *head)
Cette fonction inverse une liste chaînée.

Étapes : prev commence à NULL

current traverse la liste

On sauve le next du nœud

On change le lien current->next = prev (inversion)

On avance dans la liste

À la fin, on retourne prev (nouvelle tête)

Illustration :
Avant :

1 -> 2 -> 3 -> NULL
Après :

3 -> 2 -> 1 -> NULL
🔸 Fonction is_palindrome
int is_palindrome(listint_t **head)
Cette fonction détermine si la liste est un palindrome.

1. Cas simples
if (!head || !(*head) || !(*head)->next)
	return (1);
Liste vide (NULL) ou 1 seul élément ⇒ palindrome par définition.

2. Trouver le milieu
slow = fast = *head;
while (fast && fast->next)
{
	slow = slow->next;
	fast = fast->next->next;
}
fast avance 2 fois plus vite.

Quand fast atteint la fin, slow est au milieu.

3. Gérer les listes impaires
if (fast)
	slow = slow->next;
Si fast n’est pas NULL, la liste a un nombre impair d’éléments.

On saute le nœud du milieu (inutile dans la comparaison).

4. Inverser la deuxième moitié
reversed = reverse_list(slow);
second_half = reversed;
On inverse la deuxième moitié de la liste (à partir de slow).

5. Comparer les deux moitiés
copy1 = *head;
copy2 = reversed;
while (copy2)
{
	if (copy1->n != copy2->n)
	{
		reverse_list(second_half); // Restaurer
		return (0);
	}
	copy1 = copy1->next;
	copy2 = copy2->next;
}
On compare chaque valeur dans la première moitié (copy1) avec la deuxième inversée (copy2).

Si une différence est trouvée → pas un palindrome

6. Restaurer la liste
reverse_list(second_half);
```c
On restaure l’ordre original pour ne pas modifier la liste (bonne pratique).

### 7. Conclusion
```c
return (1);
Si tout est identique → c’est bien un palindrome !

✅ Résumé visuel :
Supposons :

Liste initiale : 1 → 2 → 3 → 2 → 1
Milieu : 3

Deuxième moitié : 2 → 1 → inversée → 1 → 2

Comparaison : 1==1, 2==2 ✅

Résultat : Palindrome