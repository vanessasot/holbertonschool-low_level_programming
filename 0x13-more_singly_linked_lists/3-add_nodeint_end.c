#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a linked list.
 * @head: Node of the list.
 * @n: Element of the node.
 *
 * Return: Address of the new element or NULL if it failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode = NULL;
	listint_t *aux = *head;

	newNode = malloc(sizeof(listint_t));

	if (newNode != NULL)
	{
		newNode->n = n;
		newNode->next = NULL;
	}
	else
		return (NULL);
	if (*head == NULL)
		*head = newNode;
	else
	{
		while (aux->next != NULL)
		{
			aux = aux->next;
		}
		aux->next = newNode;
	}
	return (newNode);
}
