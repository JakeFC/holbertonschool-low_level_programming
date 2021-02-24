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
	return (mult_factors(2, n));
}

/**
 * mult_factors - determines if a number above 1 is prime
 * @a: incrementing variable combined with b to try to find n
 * @n: number to check
 * Return: 1 if n is prime, 0 if not
 */
int mult_factors(int a, int n)
{
/* if a can be divided out evenly from n, it's not prime */
	if (n % a == 0)
		return (0);
/*
 * once the list of multiplication factors is exhausted,
 * the number must be prime
 */
	if (a > n / 2)
		return (1);
/* keeps adding iterations to the stack by testing each value of a */
	return (mult_factors(a + 1, n));
}
