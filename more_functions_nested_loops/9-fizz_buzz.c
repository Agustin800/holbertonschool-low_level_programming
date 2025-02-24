#include "main.h"
#include <stdio.h>

/**
 *main - do things
 *Return: 0
 */

int main(void)
{
	int num, three, five;

	for (num = 1; num <= 100; num++)
	{
		three = num % 3;
		five = num % 5;

		if (num == 100)
		{
			printf("Buzz");
		}
		else if (three == 0 && five == 0)
		{
			printf("FizzBuzz ");
		}
		else if (three == 0)
		{
			printf("Fizz ");
		}
		else if (five == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", num);
		}
	}
	printf("\n");
	return (0);
}
