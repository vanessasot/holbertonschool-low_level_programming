#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a linked list.
 * @head: Node of the list.
 * @n: Element of the node.
 *
 * Return: Address of the new element or NULL if it failed.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = NULL;

	newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->prev = NULL;
	newNode->n = n;

	if (!(*head))
	{
		newNode->next = NULL;
		*head = newNode;
		return (newNode);
	}
	newNode->next = *head;
	(*head)->prev = newNode;
	*head = newNode;
	return (newNode);
}
