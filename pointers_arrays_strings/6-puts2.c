#include "main.h"

/**
 *puts2 - do things
 *@str: pointer
 */

void puts2(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a += 2;
	}
	_putchar('\n');
}
