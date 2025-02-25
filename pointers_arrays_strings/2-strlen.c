#include "main.h"

/**
 * _strlen - do things
 *Return: length of a string.
 *@s: pointer.
 */

int _strlen(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}
