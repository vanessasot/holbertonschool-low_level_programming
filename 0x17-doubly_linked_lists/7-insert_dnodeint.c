#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at given position.
 * @h: Node of the list.
 * @idx: Index of the node.
 * @n: Element of the node.
 *
 * Return: Address of the new node.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode = NULL;
	dlistint_t **aux = &(*h);
	unsigned int counter = 0;

	newNode = malloc(sizeof(dlistint_t *));

	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	while (counter < idx && *aux != NULL)
	{
		aux = &(*aux)->next;
		counter++;
	}
	if (idx == counter)
	{
		newNode->next = *aux;
		*aux = newNode;
		return (newNode);
	}
	return (NULL);
}
