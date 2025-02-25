#include "main.h"

/**
 * _puts - do things
 *@str: pointer
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
