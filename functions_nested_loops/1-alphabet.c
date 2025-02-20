#include "main.h"

/**
 * print_alphabet - imprime las letras de la a a la z
 */
void print_alphabet(void)
{
	char letra;

	for (letra = 'a'; letra <= 'z'; letra++)
	{
		_putchar(letra);
	}
		_putchar(10);
}
