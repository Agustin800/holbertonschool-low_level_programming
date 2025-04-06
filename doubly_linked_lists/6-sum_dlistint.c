#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all data in a doubly linked list
 * @head: Pointer to the first node of the list
 * Return: The total sum of all 'n' values. If the list is empty, return 0.
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
