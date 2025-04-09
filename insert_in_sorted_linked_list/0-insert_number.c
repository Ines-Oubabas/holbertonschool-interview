#include <stdlib.h>
#include "lists.h"

/**
 * insert_node - insère un nombre dans une liste triée
 * @head: pointeur vers le début de la liste
 * @number: nombre à insérer
 * Return: adresse du nouveau nœud ou NULL en cas d’échec
 */
listint_t *insert_node(listint_t **head, int number)
{
    listint_t *new, *current;

    /* allouer la mémoire pour le nouveau nœud */
    new = malloc(sizeof(listint_t));
    if (new == NULL)
        return (NULL);

    new->n = number;
    new->next = NULL;

    /* cas où la liste est vide ou insertion en début de liste */
    if (*head == NULL || number < (*head)->n)
    {
        new->next = *head;
        *head = new;
        return (new);
    }

    /* sinon on parcourt la liste */
    current = *head;
    while (current->next != NULL && current->next->n < number)
        current = current->next;

    /* on insère le nœud */
    new->next = current->next;
    current->next = new;

    return (new);
}
