#include "main.h"

/**
 *_sqrt_helper - Recursively finds the square root of n.
 * @n: The number to find the square root of.
 * @x: The current guess for the square root.
 * Return: The natural square root, or -1 if n has no natural square root.
 */

int _sqrt_helper(int n, int x)
{
	if (x * x == n)
	{
		return (x);
	}
	if (x * x > n)
	{
		return (-1);
	}
	return (_sqrt_helper(n, x + 1));
}

/**
 * _sqrt_recursion - do things
 *@n: somethings
 *Return: -1 if n does not have a natural square root.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_helper(n, 0));
}
