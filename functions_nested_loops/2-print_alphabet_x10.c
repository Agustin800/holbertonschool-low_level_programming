#include "main.h"

/**
 * print_alphabet_x10 - printe cosas
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int i;
	int let;

	for (i = 0; i < 10; i++)
	{
		for (let = 'a'; let <= 'z'; let++)
		{
			_putchar(let);
			if (let == 'z')
			_putchar ('\n');
		}
	}
}
