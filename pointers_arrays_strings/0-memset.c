#include "main.h"

/**
 * *_memset - do things
 *@s:pointer to the memory block to be filled
 *@b:the value to be assigned
 *@n:the number of bytes to be filled
 *Return: returns a pointer to the memory space that was intended to be filled
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned char *ptr = (unsigned char *)s;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		ptr[i] = (unsigned char)b
	}
	return (s);
}
