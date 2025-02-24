#include "main.h"

/**
 *print_diagonal - do things
 *@n: The number of times the character $ should be printed.
 */

void print_diagonal(int n)
{
	int e;

	int cant = 0;

	if (n <= cant)
		_putchar(10);

	while (cant <= n)
	{
		e = 1;
		while (e < cant)
		{
			_putchar(' ');
			e++;
		}
		if (e == cant)
		{
			_putchar(92);
			_putchar(10);
		}
		cant++;
	}
}
