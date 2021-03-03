#include "holberton.h"
#include <stdlib.h>
int word_count(char *str);

/**
 * strtow - splits a string into words
 * @str: string input
 * Return: pointer to a pointer to strings
 */
char **strtow(char *str)
{
	int i, ii, iii, c, b;
	char **s;

	if (str == NULL || str[0] == 00)
		return (NULL);
	s = malloc((word_count(str) + 1) * sizeof(char *));
		if (s == NULL)
			return (NULL);
		for (i = 0, ii = 0; str[ii] != 00; ii++)
		{
			if (ii == 0)
			{
				if (str[ii] != 32)
					b = ii;
			}
			else if (str[ii] != 32 && str[ii - 1] == 32)
				b = ii;
			if ((str[ii + 1] == 32 || str[ii + 1] == 00)
			    && str[ii] != 32)
			{
				s[i] = malloc((ii + 2 - b) * sizeof(char));
				if (s[i] == NULL)
				{
					for (c = i - 1; c >= 0; c--)
						free(s[c]);
					free(s);
					return (NULL);
				}
				for (iii = 0; b <= ii; iii++, b++)
					s[i][iii] = str[b];
				s[i][iii] = 00;
				i++;
			}
		}
	s[i] = malloc(sizeof(char));
	s[i] = 00;
	return (s);
}

/**
 * word_count - counts the words in a function
 * @str: string input
 * Return: word count
 */
int word_count(char *str)
{
	int i, c;

	for (i = 0, c = 0; str[i] != 00; i++)
	{
		if (i == 0)
		{
			if (str[i] != 32)
				c++;
		}
		else if (str[i] != 32 && str[i - 1] == 32)
			c++;
	}
	return (c);
}
