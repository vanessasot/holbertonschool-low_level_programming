#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at given position.
 * @head: Node of the list.
 * @idx: Index of the node.
 * @n: Element of the node.
 *
 * Return: Address of the new node.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode = NULL;
	listint_t **aux = &(*head);
	unsigned int counter = 0;

	newNode = malloc(sizeof(listint_t *));

	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	while (counter < idx)
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
