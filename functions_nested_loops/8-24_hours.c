#include "main.h"

/**
 *jack_bauer - Prints every minute of the day of Jack Bauer.
 *
 * Return: No return value.
 */

void jack_bauer(void)
{
	char h1 = 0, h2 = 0, h3 = 0, m1 = 0, m2 = 0;

	while (h3 < 3)
	{
		_putchar(h1 + '0');
		_putchar(h2 + '0');
		_putchar(':');
		_putchar(m1 + '0');
		_putchar(m2 + '0');
		_putchar('\n');

		m2++;

		if (m2 > 9)
		{
			m1++;
			m2 = 0;
		}
		if (m1 > 5)
		{
			h2++;
			m2 = 0;
		}
		if (h2 > 9)
		{
			h1++;
			h2 = 0;
		}
		if (h1 == 2 && h2 > 3)
			h3 = 3;
	}
}
