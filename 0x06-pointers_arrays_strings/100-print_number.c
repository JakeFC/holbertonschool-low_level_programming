#include "holberton.h"

/**
 * print_number - prints a number
 * @n: integer input
 */
void print_number(int n)
{
	unsigned int a, c, d, nn;

	nn = n;
	if (n < 0)
	{
		_putchar('-');
		nn = -n;
	}
	c = 999999999;
	d = 1000000000;
	for (a = 0; a <= 8; a++, c /= 10, d /= 10)
		if (nn > c)
			_putchar(nn / d % 10 + '0');
	_putchar(nn % 10 + '0');
}
