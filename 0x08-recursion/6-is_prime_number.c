#include "holberton.h"

/**
 * is_prime_number - determines if a number is prime
 * @n: number to check
 * Return: 1 if n is prime, 0 if not
 */
int is_prime_number(int n)
{
/* all numbers below 2 are edge cases and non-prime */
	if (n < 2)
		return (0);
	return (mult_factors(2, 2, n));
}

/**
 * mult_factors - determines if a number above 1 is prime
 * @a: incrementing variable combined with b to try to find n
 * @b: incrementing variable combined with a to try to find n
 * @n: number to check
 * Return: 1 if n is prime, 0 if not
 */
int mult_factors(int a, int b, int n)
{
	int c = a * b;

/* if two numbers above 1 can be multiplied to find n, it is not prime */
	if (c == n)
		return (0);
/* once the list of multiplication factors is exhausted, the number must be prime */
	if (a >= n)
		return (1);
/* once we've looped through all values of b, reset it and increment a to go again */
	if (c >= n)
	{
		b = 2;
		a++;
	}
/* keeps adding iterations to the stack by testing each value of b */
	return (mult_factors(a, b + 1, n));
}
