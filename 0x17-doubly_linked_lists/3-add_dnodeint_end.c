#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a linked list.
 * @head: Node of the list.
 * @n: Element of the node.
 *
 * Return: Address of the new element or NULL if it failed.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode = NULL;
	dlistint_t *aux = *head;

	newNode = malloc(sizeof(dlistint_t));

	if (newNode != NULL)
	{
		newNode->n = n;
		newNode->next = NULL;
	}
	else
		return (NULL);
	if (*head == NULL)
	{
		newNode->prev = NULL;
		*head = newNode;
	}
	else
	{
		while (aux->next != NULL)
		{
			aux = aux->next;
		}
		aux->next = newNode;
		newNode->prev = aux;
	}
	return (newNode);
}
