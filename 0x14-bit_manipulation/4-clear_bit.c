#include "holberton.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: decimal number
 * @index: binary index value to change to 0
 * Return: 1 on success, -1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	if (*n & (1 << index))
		*n ^= (1 << index);
	return (1);
}
