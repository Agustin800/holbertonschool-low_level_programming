#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 *_strdup - Returns a pointer to a newly allocated space in memory,
 *           which contains a copy of the given string.
 * @str: The string to duplicate.
 *
 * Return: Pointer to the duplicated string, or NULL if str is NULL
 *         or if memory allocation fails.
 */

char *_strdup(char *str)
{
	char *array;
	unsigned int i, length = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[length] != '\0')
	{
		length++;
	}

	array = malloc((length + 1) * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= length; i++)
	{
		array[i] = str[i];
	}
	array[length] = '\0';

	return (array);
}
