#include "main.h"

/**
 *_is_prime_helper - Checks if a number is prime using recursion.
 *@n: The number to evaluate.
 *@div: The current divisor starting at 2.
 *Return: 1 if prime, 0 if not.
 */

int _is_prime_helper(int n, int div)
{
	if (div * div > n)
	{
		return (1);
	}
	if (n % div == 0)
	{
		return (0);
	}
	return (_is_prime_helper(n, div + 1));
}

/**
 *is_prime_number - do things
 *@n:The number to evaluate.
 *Return: 1 if prime, 0 if not.
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	return (_is_prime_helper(n, 2));
}
