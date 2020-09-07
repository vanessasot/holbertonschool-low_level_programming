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
	dlistint_t *newNode;
	dlistint_t *aux;
	dlistint_t *sig;
	unsigned int counter = 0;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	aux = *h;
	if (idx == 0)
		return (add_dnodeint(h, n));
	else if (idx == 1)
	{
		sig = aux->next;
		aux->next = newNode;
		newNode->next = sig;
		sig->prev = newNode;
		newNode->prev = aux;
		return (newNode);
	}
	while (counter != idx - 1 && aux != NULL)
	{
		aux = aux->next;
		if (aux == NULL)
			return (NULL);
		sig = aux->next;
		counter++;
	}
	if (counter < idx - 1)
		return (NULL);
	if (sig == NULL)
		return (add_dnodeint_end(h, n));
	aux->next = newNode;
	newNode->next = sig;
	newNode->prev = aux;
	if (sig != NULL)
		sig->prev = newNode;
	return (newNode);
}
