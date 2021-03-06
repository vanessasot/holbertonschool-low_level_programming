#include "lists.h"

/**
 * delete_nodeint_at_index - Delete the node at index.
 * @head: Node of the list.
 * @index: Position of the node to eliminate.
 *
 * Return: 1 if ti succeeded, -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *aux;
	listint_t *aux2;
	unsigned int counter = 0;

	if (*head == NULL)
		return (-1);

	aux = *head;

	if (index == 0)
	{
		*head = aux->next;
		free(aux);
		return (1);
	}
	while (counter < index - 1 && aux != NULL)
	{
		aux = aux->next;
		counter++;
	}
	if (aux == NULL || aux->next == NULL)
		return (-1);
	aux2 = aux->next->next;
	free(aux->next);
	aux->next = aux2;
	return (1);
}
