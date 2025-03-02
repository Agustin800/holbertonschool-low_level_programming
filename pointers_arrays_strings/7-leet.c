#include "main.h"

/**
 * *leet - do things
 *Return: a
 *@a: string
 */

char *leet(char *a)
{
	char *ptr = a;
	char let[] = "aAeEoOtTlL";
	char num[] = "4433007711";
	int i;

	while (*ptr)
	{
		for (i = 0; let[i]; i++)
		{
			if (*ptr == let[i])
			{
				*ptr = num[i];
				break;
			}
		}
		ptr++;
	}
	return (a);
}
