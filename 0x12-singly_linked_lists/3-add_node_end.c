#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a linked list.
 * @head: Node of the list.
 * @str: Element of the node.
 *
 * Return: Address of the new element or NULL if it failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode = NULL;
	list_t *aux = *head;
	unsigned int n;

	newNode = malloc(sizeof(list_t));

	for (n = 0; str[n] != '\0'; n++)
		;
	if (newNode != NULL)
	{
		newNode->len = n;
		newNode->str = strdup(str);
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
