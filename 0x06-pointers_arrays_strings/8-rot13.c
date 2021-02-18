#include "holberton.h"

/**
 * rot13 - encodes a string in rot13
 * @s: string input
 * Return: pointer to s
 */
char *rot13(char *s)
{
	int a, b;

	for (a = 0; s[a] != '\0'; a++)
	{
		b = s[a];
		for (; (b > 64 && b < 91) || (b > 96 && b < 123); b = b + 200)
		{
			if ((b > 64 && b < 78) || (b > 96 && b < 110))
				s[a] = s[a] + 26;
			s[a] = s[a] - 13;
		}
	}
	return (s);
}
