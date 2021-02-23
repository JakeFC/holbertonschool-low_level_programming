#include "holberton.h"

/**
 * rev_string - reverses a string
 * @s: string input
 */
void rev_string(char *s)
{
        int a, b;

        a = 0;
        while (*(s + a) != '\0')
                a++;
	char ss[a];
        a--;
        b = 0;
	while (*(ss + b) != '\0')
		{
			ss[b] = s[a];
			b++;
			a--;
		}
	b--;
	while (*(ss + a) != '\0')
	{
		s[a] = ss[b];
			a++;
			b--;
	}
	s[a] = '\0';
}
