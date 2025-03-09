#include "main.h"
#include <stdio.h>

/**
 *main - Prints all arguments it receives
 * @argc: The number of arguments
 * @argv: The argument vector
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
