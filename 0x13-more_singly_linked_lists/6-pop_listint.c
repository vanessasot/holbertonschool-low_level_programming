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

	if (*head == NULL)
		return (0);

	aux = *head->next;
	n = *head->n;
	free(*head);
	*head = aux;
	return (n);
}
