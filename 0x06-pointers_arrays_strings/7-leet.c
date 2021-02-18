#include "holberton.h"

/**
 * leet - encodes a string to 1337
 * @s: input string
 * Return: pointer to s
 */
char *leet(char *s)
{
	int a, b, c;
	char bs[256];


	for (a = 0; a < 256; a++)
		bs[a] = 32;
	bs[65] = 52;
	bs[69] = 51;
	bs[76] = 49;
	bs[79] = 48;
	bs[84] = 55;
	bs[97] = 52;
	bs[101] = 51;
	bs[108] = 49;
	bs[111] = 48;
	bs[116] = 55;
	for (b = 0; s[b] != '\0'; b++)
	{
		c = s[b];
		if (bs[c] != 32)
			s[b] = bs[c];
	}
	return (s);
}
