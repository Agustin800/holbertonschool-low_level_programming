#include "main.h"

/**
 *_strpbrk - do things
 *@s:the string to search
 *@accept:the bytes to search for
 *Return: 0
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (0);
}
