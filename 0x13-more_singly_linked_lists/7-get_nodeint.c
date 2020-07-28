#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a linked list.
 * @head: Node of the list.
 * @index: Index of the node.
 *
 * Return: The nth node.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int counter = 0;

	while (current != NULL)
	{
		if (counter == index)
			return (current->n);
		counter++;
		current = current->next;
	}
	if (!head)
		return (NULL);
}
