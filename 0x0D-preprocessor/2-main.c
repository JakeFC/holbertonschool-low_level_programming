#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main - prints the name of this file
 * Return: always 0
 */
int main(void)
{
	_puts(__FILE__);
	return (0);
}

/**
 * _puts - prints a string
 * @str: string input
 */
void _puts(char *str)
{
	int a;

	a = 0;
	while (*(str + a) != '\0')
	{
		_putchar(*(str + a));
		a++;
	}
	_putchar('\n');
}
