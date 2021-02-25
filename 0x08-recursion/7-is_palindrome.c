#include "holberton.h"

/**
 * is_palindrome - echoes what the real function found about palindrome status
 * of string s and confirms empty string's status
 * @s: string input
 * Return: 1 if s is a palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	int a = _strlen(0, s);

	if (s[0] == '\0')
		return (1);
	return (real_function(a, 0, s));
}

/**
 * real_function - actually finds if string s is a palindrome
 * @a: last non-null character in string s
 * @b: starting point in s to compare
 * @s: string input
 * Return: 1 if palindrome, 0 if not
 */
int real_function(int a, int b, char *s)
{
	if (s[b] != s[a])
		return (0);
	if (a == 0)
		return (1);
	return (real_function(a - 1, b + 1, s));
}

/**
 * _strlen - finds the length of a string, minus 1
 * @a: starting point of the string
 * @s: string input
 * Return: string length, minus 1
 */
int _strlen(int a, char *s)
{
	if (*(s + a) == '\0')
		return (a - 1);
	return (_strlen(a + 1, s));
}
