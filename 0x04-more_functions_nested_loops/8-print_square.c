#include "holberton.h"

/**
 * print_square - prints a square of size length
 * @size: given size of squre
 */
void print_square(int size)
{
	int a, b;

	if (size > 0)
		for (a = 1; a <= size; a++)
		{
			for (b = 1; b <= size; b++)
				_putchar ('#');
			if (a < size)
				_putchar('\n');
		}
	_putchar('\n');
}
