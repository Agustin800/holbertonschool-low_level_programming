#include "main.h"
#include <stdio.h>
/**
 *_isupper - do things
 *@c: character being studied
 *Return: 1 if c is uppercase or 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
