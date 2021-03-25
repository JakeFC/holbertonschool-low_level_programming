#include "holberton.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: decimal number
 */
void print_binary(unsigned long int n)
{
	if (!n)
	{
		_putchar('0');
		return;
	}
	recursive_print(n);
}
/**
 * recursive_print - prints a binary representation through recursion
 * @n: decimal number
 */
void recursive_print(unsigned long int n)
{
	if (!n)
		return;
	recursive_print(n >> 1);
	if (n & 1)
		_putchar('1');
	else
		_putchar('0');
}
