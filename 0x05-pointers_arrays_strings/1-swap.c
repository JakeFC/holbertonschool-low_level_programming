#include "holberton.h"

/**
 * swap_int - swaps values of 2 integers
 * @a: input int
 * @b: input int
 */
void swap_int(int *a, int *b)
{
	int c, d;

	c = *a;
	d = *b;
	*a = d;
	*b = c;
}
