#include "holberton.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string input
 */
void _print_rev_recursion(char *s)
{
	long int a = 0;

	if (s[a] == '\0')
		return;
	_print_rev_recursion(s + 1);
	_putchar(s[a]);
}
