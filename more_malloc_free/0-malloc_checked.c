#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 *malloc_checked - do things
 *@b: Number of bytes to allocate
 * Return: Pointer to the allocated memory
 * If malloc fails, the program terminates with status 98.
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
