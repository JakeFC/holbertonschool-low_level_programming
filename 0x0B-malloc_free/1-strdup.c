#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - creates and returns a pointer to a copy of the inputted string
 * @str: string input
 * Return: pointer to copy of str, or NULL if str is NULL or there is
 * insufficient memory
 */
char *_strdup(char *str)
{
	char *s;
	int i, l;

	if (str == NULL)
		return (0);
	for (l = 0; str[l] != '\0';)
		l++;
	s = malloc(l + 1);
	if (s == NULL)
		return (0);
	for (i = 0; i <= l; i++)
		s[i] = str[i];
	return (s);
}
