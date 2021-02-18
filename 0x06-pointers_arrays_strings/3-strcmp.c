#include "holberton.h"

/**
 * _strcmp - compares string length for two strings
 * @s1: string input to compare
 * @s2: string input to compare to
 * Return: integer difference, or 0 if none
 */
int _strcmp(char *s1, char *s2)
{
	int a;

	for (a = 0; s1[a] == s2[a] && s1[a] != '\0' && s2[a] != '\0';)
		a++;
	return (s1[a] - s2[a]);
}
