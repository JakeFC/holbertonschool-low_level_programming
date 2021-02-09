#include "holberton.h"
#include <ctype.h>

/**
 * _islower - checks for lowercase
 * Return: 1 or 0, if lower or not
 */
int _islower(int c);

int _islower(c)
{
	if (islower (c))
		return (1);
	else
		return (0);
}
