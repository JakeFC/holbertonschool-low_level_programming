#include "holberton.h"

/**
 * string_toupper - changes lowercases to uppercases in a string
 * @s: string input
 * Return: pointer to char
 */
char *string_toupper(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
		if (s[a] > 96 && s[a] < 123)
			s[a] -= 32;
	return (s);
}
