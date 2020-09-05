#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a linked list.
 * @h: Node of the list.
 *
 * Return: Len of the list.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t counter;

	for (counter = 0; h != NULL; counter++)
	{
		if (h == NULL)
			return (0);
		else
			printf("%d\n", h->n);
		h = h->next;
	}
	return (counter);
}
