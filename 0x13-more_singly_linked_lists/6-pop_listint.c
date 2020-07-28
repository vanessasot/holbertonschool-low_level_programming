#include "lists.h"

/**
 * pop_listint - Deletes the head node a linked list.
 * @head: Node of the list.
 *
 * Return: Nothing.
 */

int pop_listint(listint_t **head)
{
	listint_t *aux;
	int n;

	aux = *head;

	if (!aux)
		return (0);

	*head = aux->next;
	n = aux->n;
	free(aux);
	return (n);
}
