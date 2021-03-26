#include "holberton.h"

/**
 * flip_bits - returns the number of different bits between two numbers
 * @n: decimal number
 * @m: decimal number
 * Return: number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, sum;
	unsigned long int uniq = n ^ m;

	for (i = 0, sum = 0; i < 64; uniq >>= 1, i++)
	{
		if (uniq & 1)
			sum++;
	}
	return (sum);
}
