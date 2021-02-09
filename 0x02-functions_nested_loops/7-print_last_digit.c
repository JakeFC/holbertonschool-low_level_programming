#include <stdlib.h>
/**
 * print_last_digit - prints the last digit of a #
 * c is input
 * a is last digit of c
 * b is abs of a
 * Return: absolute value of a
 */
int print_last_digit(int c)
{
	int a = abs(c % 10);
	int b = abs(a);

	_putchar(a + '0');
	return (b);
}
