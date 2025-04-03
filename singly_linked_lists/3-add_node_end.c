#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
* add_node_end - do things
* @head: Double pointer to the head of the list
* @str: String to duplicate and add to the new node
* Return: Address of the new node, or NULL on failure
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_mode, *temp;

	if (!str)
		return (NULL);

	new_mode = malloc(sizeof(list_t));
	if (!new_mode)
		return (NULL);

	new_mode->str = malloc(strlen(str + 1));
	if (!new_mode->str)
	{
		free(new_mode);
		return (NULL);
	}
	strcpy(new_mode->str, str);

	new_mode->len = strlen(str);
	new_mode->next = NULL;

	if (*head == NULL)
	{
		*head = new_mode;
	}
	else
	{
		temp = *head;
			while (temp->next)
				temp = temp->next;
		temp->next = new_mode;
	}
	return (new_mode);
}
