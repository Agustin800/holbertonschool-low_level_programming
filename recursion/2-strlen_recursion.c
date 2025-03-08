#include "main.h"

/**
 * _strlen_recursion - do rhings
 * @s: pointer
 * Return: The length of the chain.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
