#include "main.h"

/**
 * _islower - do things
 * Return: 1 if the character is lowercase, 0 otherwise
 *@c: do thing
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	return (0);
}
