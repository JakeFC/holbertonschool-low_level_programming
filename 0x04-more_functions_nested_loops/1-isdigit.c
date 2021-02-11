#include "holberton.h"

/**
 * _isdigit - checks for digit
 * @c: input
 * Return: 1 if digit, 0 if not
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
