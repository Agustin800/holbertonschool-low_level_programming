#include <stdio.h>

/**
 * main - do things
 * Return: 0
 */

int main(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
		putchar (',');
                putchar (' ');
	}
	{
		putchar('\n');
	}

	return (0);
}
