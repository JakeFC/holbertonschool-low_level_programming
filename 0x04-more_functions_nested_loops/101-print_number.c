#include "holberton.h"

/**
 * print_number - prints an integer
 * @n: input to print
 */
void print_number(int n)
{
	int a, b, c, d;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	a = ((n / 1000) % 10);
	b = ((n / 100) % 10);
	c = ((n / 10) % 10);
	d = (n % 10);

	if (n > 999)
		_putchar(a + '0');
	if (n > 99)
		_putchar(b + '0');
	if (n > 9)
		_putchar(c + '0');
	_putchar(d + '0');
}
