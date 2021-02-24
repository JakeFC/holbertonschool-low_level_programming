#include "holberton.h"

/**
 * _sqrt_recursion - returns the square root of a number
 * @n: the number
 * Return: square root of n or -1 if no natural root
 */
int _sqrt_recursion(int n)
{
	return (_square(0, n));
}

/**
 * _square - returns the square root of a number
 * @x: root to test for square value
 * @n: value to compare to x times x
 * Return: square root of n or -1 if no natural root
 */
int _square(int x, int n)
{
	int k = x * x;

	if (k > n)
		return (-1);
	if (k == n)
		return (x);
	return (_square(x + 1, n));
}
