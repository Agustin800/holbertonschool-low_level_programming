#include "main.h"

/**
 *print_rev - do things
 *@s: pointer
 */

void print_rev(char *s)
{
	int lon = 0;

	while (s[lon] != '\0')
	{
		lon++;
	}
	while (lon > 0)
	{
		_putchar(s[lon - 1]);
		lon--;
	}
	_putchar('\n');
}
