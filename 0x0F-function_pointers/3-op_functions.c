#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - adds two ints
 * @a: int
 * @b: int
 * Return: sum of ints
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two ints
 * @a: int
 * @b: int
 * Return: difference of ints
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two ints
 * @a: int
 * @b: int
 * Return: result of a times b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two ints
 * @a: int
 * @b: int
 * Return: result of a divided by b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - continuously divides an int by an int to find a remainder
 * @a: int to divide
 * @b: int to divide by
 * Return: remainder of a divided repeatedly by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
