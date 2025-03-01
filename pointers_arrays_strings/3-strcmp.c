#include "main.h"

/**
 *_strcmp - do things
 *@s1: char 1
 *@s2: char 2
 *Return: positive if s1 < s2, negative if s2 > s1, 0 if s1 = s2
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}
