#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *main - Multiplies two numbers and prints the result
 * @argc: The number of arguments
 * @argv: The argument vector
 * Return: 0 if successful, 1 if there are not exactly two arguments
 */

int main(int argc, char *argv[])
{
	int num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	printf("%d\n", num1 * num2);
	return (0);
}
