#include "holberton.h"

/**
 *main - prints Holberton
 *Return: 0
 */
int main(void)
{
	char* c = "Holberton";

	while (*c)
	{
	_putchar(*c++);
	}
	_putchar('\n');
	return (0);
}
