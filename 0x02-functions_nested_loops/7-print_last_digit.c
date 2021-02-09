#include "holberton.h"

/**
 * print_last_digit - prints the last digit of a #
 * @a: is input
 * Return: absolute value of a
 */
int print_last_digit(int a)
{
	int c = a % 10;

	if (a < 0)
		c = a * -1;

	putchar(c + '0');
	return (c);
}
