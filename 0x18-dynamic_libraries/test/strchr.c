#include "holberton.h"

/**
 * _strchr - locates a character in a string
 * @s: target string
 * @c: desired character
 * Return: pointer to char c in s or NULL if not found
 */
char *_strchr(char *s, char c)
{
	unsigned int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == c)
			return (s + a);
	}
	if (c == '\0')
		return (s + a);
	return (0);
}
