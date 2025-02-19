#include <stdio.h>

/**
 * main - putchar
 * Return: 0
 */

int main(void)
{
	char letra;
	char mayus;

		for (letra = 'a'; letra <= 'z'; letra++)
	{
		putchar(letra);
	}
		for (mayus = 'A'; mayus <= 'Z'; mayus++)
	{
			putchar(mayus);
	}
	{
			putchar('\n');
	}

		return (0);
}
