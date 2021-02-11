#include "holberton.h"

/**
 * print_triangle - prints triangle of size "size"
 * @size: size of triangle
 */
void print_triangle(int size)
{
	int a, b, c;

	if (size > 0)
		for (a = 1; a <= size; a++)
		{
			for (b = size; b > a; b--)
				_putchar(' ');
			for (c = 1; c <= a; c++)
				_putchar('#');
			if (a < size)
				_putchar('\n');
		}
	_putchar('\n');
}
