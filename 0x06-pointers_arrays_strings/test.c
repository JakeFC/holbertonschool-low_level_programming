#include "holberton.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: string input
 * Return: pointer to s
 */
char *cap_string(char *s)
{
	int a;

	if (s[0] > 96 && s[0] < 123)
		s[0] -= 32;
	for (a = 1; s[a] != '\0'; a++)
	{
		if (s[a + 1] > 96 && s[a + 1] < 123)
		{
			if (s[a] == 9 || > 31 && < 35) || '\n')
				s[a + 1] -= 32;
			else if (s[a] == 40 || s[a] == 41 || s[a] == 44 || s[a] == 46)
				s[a + 1] -= 32;
			else if (s[a] == 59 || s[a] == 63 || s[a] == 123 || s[a] == 125)
				s[a + 1] -= 32;
		}
	}
	return (s);
}
