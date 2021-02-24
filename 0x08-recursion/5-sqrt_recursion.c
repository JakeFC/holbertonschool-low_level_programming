#include "holberton.h"

/**
 * _sqrt_recursion - returns the square root of a number
 * @n: the number
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	return (_square(0, n));
}

int _square(int x, int n)
{
	int k = x * x;

	if (k > n)
		return (-1);
	if (k == n)
		return (x);
	return (_square(x + 1, n));
}
