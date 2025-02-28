#include "main.h"

/**
 * *_strncat - do things
 *@dest: pointer
 *@src: pointer
 *@n:pointer
 *Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *dest_or = dest;
	int i;

	while (*dest != '\0')
	{
		dest++;
	}
	for (i = 0; i < n && *src != '\0'; i++)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest_or);
}
