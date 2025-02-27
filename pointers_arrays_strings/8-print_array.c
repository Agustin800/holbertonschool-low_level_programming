#include "main.h"
#include <stdio.h>
/**
 *print_array - do things
 *@a: pointer
 *@n: the number of elements of the array to be printed
 */

void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);
		if (j < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
