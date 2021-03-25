#include "holberton.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary string
 * Return: converted number, or 0 if invalid string/b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0, x;
	int i;

	if (!b)
		return (0);
	for (i = 0; b[i]; i++)
		if (b[i] != '1' && b[i] != '0')
			return (0);
	for (--i, x = 1; i >= 0; i--, x *= 2)
		n += x * (b[i] - 48);
	return (n);
}
