#include "function_pointers.h"

/**
 * int_index - do things
 * @array: Array of integers
 * @size: Number of elements in the array
 * @cmp: Function to compare values
 * Return: Index of the first element where `cmp` doeis
 * not return 0, or -1 if there are no matches
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
