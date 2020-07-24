#include "lists.h"

/**
 * print_list - Prints all the elements of a linked list.
 * @h: Node of the list.
 *
 * Return: Len of the list.
 */

size_t print_list(const list_t *h)
{
	size_t counter;

	for (counter = 0; h != NULL; counter++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (counter);
}
