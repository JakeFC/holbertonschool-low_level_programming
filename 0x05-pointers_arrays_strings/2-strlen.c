#include "holberton.h"

/**
 * _strlen - returns the length of a string
 * @s: string input
 * Return: string length
 */
int _strlen(char *s)
{
	char *a;

	a = s;
	while (*s != '\0')
		++s;
	return (s - a);

}
