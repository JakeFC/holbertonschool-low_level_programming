#include "holberton.h"

/**
 * _strstr - locates first instance of a substring in a string
 * @haystack: target string
 * @needle: desired substring
 * Return: pointer to needle or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int a, b;

	for (a = 0; haystack[a] != '\0'; a++)
	{
		if (haystack[a] == needle[0])
		{
			for (b = 0; needle[b] != '\0'; b++)
			{
				if (haystack[a + b] != needle[b])
					break;
				else if (needle[b + 1] == '\0')
					return (haystack + a);
			}
		}
	}
	return (0);
}
