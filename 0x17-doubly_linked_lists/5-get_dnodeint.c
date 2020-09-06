#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a linked list.
 * @head: Node of the list.
 * @index: Index of the node.
 *
 * Return: The nth node.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int counter = 0;

	while (current != NULL)
	{
		if (counter == index)
			return (current);
		counter++;
		current = current->next;
	}
	return (NULL);
}
