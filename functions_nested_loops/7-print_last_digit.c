#include "main.h"

/**
 * print_last_digit - funcion para eso mismo
 * @n: numerin que entra
 * Return: 0
 */

int print_last_digit(int n)
{
	int last_digit = n % 10;  /* Obtener el último dígito */

	if (last_digit < 0)
	{
		last_digit = -last_digit;  /* Si el número es negativo, hacerlo positivo */
	}

	_putchar(last_digit + '0');
	return (last_digit);
}
