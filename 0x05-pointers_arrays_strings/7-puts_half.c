#include "holberton.h"

/**
 * puts_half - prints second half of a string
 * @str: input string
 */
void puts_half(char *str)
{
	int a;
	int b;

	a = 0;
	while (str[a] != '\0')
		a++;
	for (b = 0; str[b] != '\0'; b++)
	{
		if (b > a / 2)
			_putchar(str[b]);
	}
	_putchar('\n');
}
