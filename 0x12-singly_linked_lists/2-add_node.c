#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a linked list.
 * @head: Node of the list.
 * @str: Element of the node.
 *
 * Return: Address of the new element or NULL if it failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	unsigned int n;
	list_t *newNode = NULL;

	newNode = malloc(sizeof(list_t));

	for (n = 0; str[n] != '\0'; n++)
		;
	if (newNode != NULL)
	{
		newNode->next = *head;
		*head = newNode;
		newNode->str = strdup(str);
		newNode->len = n;
		return (newNode);
	}
	else
		return (NULL);
}
