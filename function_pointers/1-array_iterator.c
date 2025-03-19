#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - do things
 * @array: Array of integers
 * @size: Size of the array
 * @action: Function to execute on each element
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
