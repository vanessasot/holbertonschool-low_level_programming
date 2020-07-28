#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data.
 * @head: Node of the list.
 *
 * Return: The sum.
 */

int sum_listint(listint_t *head)
{
	listint_t *current = head;
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
