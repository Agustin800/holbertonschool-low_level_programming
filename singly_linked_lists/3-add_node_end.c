#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
* _strlen - do things
* @str: Pointer to the string
*Return: Length of the string
*/

size_t _strlen(const char *str)
{
	size_t len = 0;

	while (str[len] != '\0')
		len++;
	return (len);
}

/**
* add_node_end - do things
* @head: Double pointer to the head of the list
* @str: String to duplicate and add to the new node
* Return: Address of the new node, or NULL on failure
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *temp = *head;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = _strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (temp->next)
		temp = temp->next;

	temp->next = new_node;

	return (new_node);
}
