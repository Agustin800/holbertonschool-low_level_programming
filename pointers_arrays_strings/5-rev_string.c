#include "main.h"

/**
 *rev_string - do things
 *@s: pointer
 */

void rev_string(char *s)
{
	int a = 0, i;
	char temp;

	while (s[a] != '\0')
	{
		a++;
	}
	for  (i = 0; i < a / 2; i++)
	{
		temp = s[i];
		s[i] = s[a - 1 - i];
		s[a - 1 - i] = temp;
	}
}
