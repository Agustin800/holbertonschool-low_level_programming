#include "main.h"

/**
 * *_strcat - do things
 * @dest: pointer
 * @src: pointer
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, a = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[a] != '\0')
	{
		dest[i] = src[a];
		i++;
		a++;
	}
	dest[i] = '\0';
	return (dest);
}
