#include "lists.h"

/**
 * list_len - Counts the number of elements in a `list_t` list
 * @h: Pointer to the linked list of type `list_t`
 * Return: The number of nodes in the list
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
