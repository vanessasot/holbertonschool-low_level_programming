#include "lists.h"

/**
 * print_listint - Prints all the elements of a linked list.
 * @h: Node of the list.
 *
 * Return: Number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t counter;

	for (counter = 0; h != NULL; counter++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (counter);
}
