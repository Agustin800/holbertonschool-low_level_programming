#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _calloc - do things
 * @nmemb: Number of elements in the array.
 * @size: Size of each element in bytes.
 * Return: Pointer to allocated memory, or NULL if it fails.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (nmemb * size); i++)
	{
		ptr[i] = 0;
	}
	return (ptr);
}
