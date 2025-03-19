#include "3-calc.h"

/* Addition function */
int op_add(int a, int b)
{
	return (a + b);
}

/* Subtraction function */
int op_sub(int a, int b)
{
	return (a - b);
}

/* Multiplication function */
int op_mul(int a, int b)
{
	return (a * b);
}

/* Division function */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/* Modulo function */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
