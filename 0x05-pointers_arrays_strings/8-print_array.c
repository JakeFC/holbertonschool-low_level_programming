#include <stdio.h>
#include "holberton.h"

/**
 * print_array - prints n number of array elements
 * @a: string input
 * @n: integer input
 */
void print_array(int *a, int n)
{
	int b;

	if (n > 0)
	{
		for (b = 0; b < n - 1; b++)
			printf("%d, ", a[b]);
		printf("%d", a[n - 1]);
	}
	putchar('\n');
}
