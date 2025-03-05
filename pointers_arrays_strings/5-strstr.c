#include "main.h"

/**
 * _strstr - do things
 *@haystack: the string to search
 *@needle: the substring to search for
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{
	char *h;
	char *n;

	if (*needle == '\0')
	{
		return (haystack);
	}
	while (*haystack)
	{
		h = haystack;
		n = needle;

		while (*n && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (0);
}
