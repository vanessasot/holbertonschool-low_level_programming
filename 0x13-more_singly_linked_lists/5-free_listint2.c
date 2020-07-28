#include "lists.h"

/**
 * free_listint2 - Frees a linked list.
 * @head: Node of the list.
 *
 * Return: Nothing.
 */

void free_listint2(listint_t **head)
{
	listint_t *aux;
	listint_t *aux2;

	if (head == NULL)
		return;

	aux = *head;

	while (aux != NULL)
	{
		aux2 = aux->next;
		free(aux);
		aux = aux2;
	}
	*head = NULL;
}
