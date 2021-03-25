#include "holberton.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: decimal number
 * @index: index of binary representation to return
 * Return: value of bit at index or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (n == 0)
	{
		if (index == 0)
			return (0);
		else
			return (-1);
	}
	for (i = 0; n; i++, n >>= 1)
	{
		if (i == index)
			return (n & 1 ? 1 : 0);
	}
	return (-1);
}
