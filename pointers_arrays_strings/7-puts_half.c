#include "main.h"

/**
 *puts_half - do things
 *@str: pointer
 */

void puts_half(char *str)
{
	int a, b;

	a = 0;

	while (str[a] != '\0')
	{
		a++;
	}
	if (a % 2 == 0)
	{
		b = a / 2;
	}
	else
	{
		b = (a / 2) + 1;
	}
	while (str[b] != '\0')
	{
		_putchar(str[b]);
		b++;
	}
	_putchar('\n');
}
