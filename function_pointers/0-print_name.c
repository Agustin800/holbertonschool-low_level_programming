#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - do things
 * @name: Name to print
 * @f: Pointer to the function that prints the name
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
