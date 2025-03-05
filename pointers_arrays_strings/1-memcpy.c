#include "main.h"

/**
 * *_memcpy - do things
 *@dest: pointer to the memory block to be filled
 *@src: the value to be assigned
 *@n: the number of bytes to be filled
 *Return: returns a pointer to the memory space that was intended to be filled
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
