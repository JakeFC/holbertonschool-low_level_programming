#include "holberton.h"

/**
 * reverse_array - reverses an array of ints
 * @a: string input
 * @n: number of array elements
 */
void reverse_array(int *a, int n)
{
	int c, t;

	n--;
	for (c = 0; c <= n / 2; c++, n--)
	{
		t = a[c];
		a[c] = a[n];
		a[n] = t;
	}
}
