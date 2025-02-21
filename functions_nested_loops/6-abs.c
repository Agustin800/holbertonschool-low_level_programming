#include "main.h"
#include <stdio.h>

/**
 * _abs - Computes the absolute value of an integer.
 * Return: The absolute value of n.
 *@n: The integer for which the absolute value is calculated.
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
