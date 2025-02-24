#include "main.h"

/**
 *_isdigit - do things
 *@c: character being studied
 *Return: 1 if c is a digit or 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c < 10)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
