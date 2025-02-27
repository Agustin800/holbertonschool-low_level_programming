#include "main.h"

/**
 **_strcpy - do things
 *@src: the string to copy
 *@dest: where it is copied to
 * Return: dest_og
 */

char *_strcpy(char *dest, char *src)
{
	char *dest_og = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (dest_og);
}
