#include "lists.h"

/**
 * free_dlistint - Frees a linked list.
 * @head: Node of the list.
 *
 * Return: Nothing.
 */

void free_dlistint(dlistint_t *head)
{
	size_t len;

	for (len = 0; head != NULL; len++)
	{
		free(head);
		head = head->next;
	}
}
