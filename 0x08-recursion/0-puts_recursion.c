#include "holberton.h"

/**
 * _puts_recursion - prints a string
 * @s: string input
 */
void _puts_recursion(char *s)
{
	long int a = 0;

	if (s[a] == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s[a]);
	_puts_recursion(s + 1);
}
