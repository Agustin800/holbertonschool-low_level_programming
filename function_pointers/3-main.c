#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - Main program that performs mathematical operations
* @argc: Number of arguments
* @argv: Array of arguments
*
* Return: 0 if everything is OK, otherwise, an error code
*/

int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*operation)(int, int) = NULL;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	operation = get_op_func(argv[2]);

	if (operation == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	result = operation(num1, num2);
	printf("%d\n", result);

	return (0);
}
