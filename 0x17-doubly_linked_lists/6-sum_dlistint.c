#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data.
 * @head: Node of the list.
 *
 * Return: The sum.
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int sum = 0;

	if (!head)
		return (0);

	while (current != NULL)
	{
		sum = sum + current->n;
		current = current->next;
	}
	return (sum);
}
