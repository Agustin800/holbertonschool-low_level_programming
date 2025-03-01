#include "main.h"

/**
 **cap_string - do things
 *@a: string
 *Return: Pointer to the modified string.
 */

char *cap_string(char *a)
{
	int i = 0;

	if (a[i] >= 'a' && a[i] <= 'z')
	{
		a[i] -= 32;
	}

	while (a[i] != '\0')
	{
		if (a[i] == ' ' || a[i] == '\n' || a[i] == '\t' || a[i] == '.' ||
		a[i] == ',' || a[i] == '!' || a[i] == '?' || a[i] == ';' ||
		a[i] == ':')
		{
			if (a[i + 1] >= 'a' && a[i + 1] <= 'z')
			{
				a[i + 1] -= 32;
			}
		}
		i++;
	}
	return (a);
}
