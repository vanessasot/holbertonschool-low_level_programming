#include "lists.h"

/**
 * free_listint2 - Frees a linked list.
 * @head: Node of the list.
 *
 * Return: Nothing.
 */

void free_listint2(listint_t **head)
{
	size_t len;
	*head = NULL;

	for (len = 0; *head != NULL; len++)
	{
		free(*head);
		*head = head->next;
	}
}
