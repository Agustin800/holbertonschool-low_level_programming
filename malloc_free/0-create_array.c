#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * create_array - do things
 * @size: The size of the array.
 * @c: The character to initialize the array with.
 * Return: A pointer to the array, or NULL if the allocation fails or size is 0
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	array = malloc(size * sizeof(char));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
