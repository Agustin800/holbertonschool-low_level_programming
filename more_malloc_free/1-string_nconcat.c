#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
* str_len - Calculates the length of a string.
* @s: String to measure.<F10>
* Return: Length of the string.
*/

unsigned int str_len(char *s)
{
	unsigned int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}

/**
 *string_nconcat - do things
 *@s1: First string
* @s2: Second string
* @n: Number of characters in s2 to copy
* Return: Pointer to the new concatenated string, or NULL if it fails.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i, len_total;
	char *new_str;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len1 = str_len(s1);
	len2 = str_len(s2);

	if (n >= len2)
		n = len2;

	len_total = len1 + n + 1;
	new_str = malloc(len_total);

	if (new_str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		new_str[i] = s1[i];

	for (i = 0; i < len2; i++)
		new_str[len1 + i] = s2[i];

	new_str[len1 + n] = '\0';

	return (new_str);
}
