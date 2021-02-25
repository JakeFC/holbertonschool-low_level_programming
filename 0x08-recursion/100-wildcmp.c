#include "holberton.h"

/**
 * wildcmp - determines whether two strings are exactly the same with '*' wild
 * @s1: normal string input
 * @s2: string input with possible wilds
 * Return: 1 if same, 0 if not
 */
int wildcmp(char *s1, char *s2)
{
	return (wld(0, 0, s1, s2));
}

/**
 * wld - checks if a normal and wild string are the same, after wild '*' rules
 * @a: position in string 1
 * @b: position in string 2
 * @s1: normal string
 * @s2: string with possible '*' wilds
 * Return: 1 if same, 0 if not
 */
int wld(int a, int b, char *s1, char *s2)
{
	if (s2[b] == '*')
		return (wld(a, ++b, s1, s2));
	if (s1[a] != s2[b])
	{
		if (s1[a] == '\0')
			return (0);
		else if (was_star_previously(--b, s2) == 1)
			return (wld(++a, b, s1, s2));
		else
			return (0);
	}
	if (s2[b] == '\0')
	{
		if (s1[a] == '\0')
			return (1);
		else
			return (0);
	}
	return (wld(++a, ++b, s1, s2));
}

/**
 * was_star_previously - checks if string contained a '*' in the given position
 * or earlier
 * @b: position in string
 * @s2: string input
 * Return: 1 if present, 0 if not
 */
int was_star_previously(int b, char *s2)
{
	if (s2[b] == '*')
		return (1);
	if (b == 0)
		return (0);
	return (was_star_previously(--b, s2));
}
