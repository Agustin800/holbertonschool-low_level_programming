#include "lists.h"
#include <stdlib.h>

/**
 * free_list - do things
 * @head: Pointer to the head of the list
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
