#include "main.h"
#include <stdio.h>

/**
 *main - Prints the number of arguments passed to it
 * @argc: The number of arguments
 * @argv: The argument vector (not used)
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
