#include "holberton.h"

/**
 * print_array - prints n number of array elements
 * @a: string input
 * @n: integer input
 */
void print_array(int *a, int n)
{
	int b;

	for (b = 0; a[b] != a[n]; b++)
	{
		_putchar(a[b]);
		_putchar(',');
		_putchar(' ');
	}
	_putchar(a[n]);
	_putchar('\n');
}
