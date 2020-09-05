#include "lists.h"

/**
 * dlistint_len - Number of elements in a linked list.
 * @h: Node of the list.
 *
 * Return: Len of the list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t len;

	for (len = 0; h != NULL; len++)
		h = h->next;
	return (len);
}
