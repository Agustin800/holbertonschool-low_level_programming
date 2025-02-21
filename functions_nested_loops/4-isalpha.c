#include "main.h"

/**
 * _isalpha - do things
 * Return: 0
 * @c: do things
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);

	return (0);
}
