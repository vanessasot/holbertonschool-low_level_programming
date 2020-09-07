#include "lists.h"

/**
 * delete_dnodeint_at_index - Delete the node at index.
 * @head: Node of the list.
 * @index: Position of the node to eliminate.
 *
 * Return: 1 if ti succeeded, -1 if it failed.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *aux;
	unsigned int counter = 0;

	if (*head == NULL)
		return (-1);

	aux = *head;

	while (counter < index)
	{
		if (aux->next)
		{
			aux = aux->next;
			counter++;
		}
		else
			return (-1);
	}
	if (!(aux))
		return (-1);
	if (index == 0)
	{
		*head = aux->next;
		if (aux->next)
			aux->next->prev = NULL;
		free(aux);
		return (1);
	}
	aux->prev->next = aux->next;
	if (aux->next)
		aux->next->prev = aux->prev;
	free(aux);
	return (1);
}
