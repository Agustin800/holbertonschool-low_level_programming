#include <stdio.h>
#include "main.h"

/**
 *main - Prints the name of the program
 *@argc: The argument count
 *@argv: The argument vector
 *Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
