#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a linked list.
 * @head: Node of the list.
 * @n: Element of the node.
 *
 * Return: Address of the new element or NULL if it failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = NULL;

	newNode = malloc(sizeof(listint_t));

	if (newNode != NULL)
	{
		newNode->next = *head;
		*head = newNode;
		newNode->n = n;
		return (newNode);
	}
	else
		return (NULL);
}
