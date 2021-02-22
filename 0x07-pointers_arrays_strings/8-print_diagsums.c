#include <stdio.h>
#include "holberton.h"

/**
 * print_diagsums - prints the sums of the diagonals of a square matrix
 * @a: square input array
 * @size: length and height of a
 */
void print_diagsums(int *a, int size)
{
	int b;
	unsigned sum1, sum2;

	for (b = 0, sum1 = 0; b < size * size; b += size + 1)
		sum1 += a[b];
	for (b = size - 1, sum2 = 0; b < size * size - size + 1; b += size - 1)
		sum2 += a[b];
	printf("%d, %d\n", sum1, sum2);
}
