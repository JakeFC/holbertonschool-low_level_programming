#include "holberton.h"

/**
 * _pow_recursion - returns the value of x to the y power
 * @x: base number
 * @y: the power to apply
 * Return: value of x to the y power
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, y - 1));
}
