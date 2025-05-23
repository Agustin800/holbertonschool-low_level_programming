#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * array_range - do things
 * @min: Minimum value (inclusive).
 * @max: Maximum value (inclusive).
 * Return: Pointer to the newly created array, or NULL if it fails.
 */

int *array_range(int min, int max)
{
	int *arr;
	int i, size;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;
	arr = malloc(size * sizeof(int));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = min + i;
	}
	return (arr);
}
