#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: Pointer to the first node of the list.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
