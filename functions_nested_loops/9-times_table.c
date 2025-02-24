#include "main.h"

/**
 * times_table - Print the multiplication table from 0 to 9.
 */

void times_table(void)
{
	int line, num, producto;

	for (line = 0; line <= 9; line++)
	{
		for (num = 0; num <= 9; num++)
		{
			producto = line * num;

			if (producto >= 10)
			{
				_putchar((producto / 10) + '0');
				_putchar((producto % 10) + '0');
			}
			else
			{
				_putchar(producto + '0');
			}

			if (num != 9)
			{
				_putchar(',');
				_putchar(' ');

				if (line * (num + 1) < 10)
				{
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
