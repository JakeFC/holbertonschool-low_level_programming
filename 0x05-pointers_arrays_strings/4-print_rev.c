#include "holberton.h"

/**
 * print_rev - prints string in reverse
 * @s: string input
 */
void print_rev(char *s)
{
	int a;

	a = 0;
	while (*(s + a) != '\0')
		a++;
	while (a >= 0)
		_putchar(*(s + a));
	_putchar('\n');
}
