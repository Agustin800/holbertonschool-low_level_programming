#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 *add_node - do things
 * @head: Double pointer to the first node of the list
 * @str: The string to store in the new node
 * Return: The address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_mode;

	if (str == NULL)
		return (NULL);

	new_mode = malloc(sizeof(list_t));
	if (new_mode == NULL)
		return (NULL);

	new_mode->str = strdup(str);
	if (new_mode->str == NULL)
	{
		free(new_mode);
		return (NULL);
	}

	new_mode->len = strlen(str);
	new_mode->next = *head;

	*head = new_mode;

	return (new_mode);
}
