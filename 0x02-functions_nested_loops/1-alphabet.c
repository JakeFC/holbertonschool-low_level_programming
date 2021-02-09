#include "holberton.h"

/**
 * print_alphabet - prints the alphabet
 * Return: 0
 */
void print_alphabet(void);

void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
		_putchar(a);
	_putchar('\n');
}
