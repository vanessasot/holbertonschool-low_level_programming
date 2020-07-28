#include "lists.h"

/**
 * free_listint - Frees a linked list.
 * @head: Node of the list.
 *
 * Return: Nothing.
 */

void free_listint(listint_t *head)
{
	size_t len;

	for (len = 0; head != NULL; len++)
	{
		free(head);
		head = head->next;
	}
}
