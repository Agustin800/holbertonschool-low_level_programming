#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index
 * @n: The number to check
 * @index: The index of the bit to check (starting from 0)
 * Return: The value of the bit at index or -1 if an error occurs
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	return ((n >> index) & 1);
}
