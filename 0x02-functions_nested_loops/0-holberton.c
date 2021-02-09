#include "holberton.h"

/**
 *main - prints Holberton
 *Return: 0
 */
int main(void)
{
	char *a = "Holberton";

	while (*a)
	{
	_putchar(*a++);
	}
	_putchar('\n');
	return (0);
}
