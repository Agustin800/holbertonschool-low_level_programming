#include "main.h"

/**
 *more_numbers - do things
 *
 */

void more_numbers(void)
{
	int i, n;

	for (i = 0; i < 10; i++)
	{
	for (n = 0; n <= 14; n++)
	{
		if (n >= 10)
		_putchar('1');
		_putchar('0' + (n % 10));
	}
	_putchar('\n');
	}
}
