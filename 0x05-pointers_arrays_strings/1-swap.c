#include "holberton.h"

/**
 * swap_int - swaps values of 2 integers
 */
void swap_int(int *a, int *b)
{
	int c,d;

	c = *a;
	d = *b;
	*a = d;
	*b = c;
}
