#include <stdio.h>
#include "holberton.h"

/**
 * print_diagsums - prints the sums of the diagonals of square matrix
 * @a: square input array
 * @size: length and height of a
 */
void print_diagsums(int *a, int size)
{
	unsigned int b, sum;

	for (b = 0, sum = 0; b < size; b++)
		sum += a[b][b];
	printf("%d", sum);
}
