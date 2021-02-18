#include "holberton.h"

/**
 * _strncat - appends src string to the dest string
 * @dest: destination string
 * @src: string to add
 * @n: maximum bytes from src
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	for (a = 0; dest[a] != '\0';)
		a++;
	for (b = 0; src[b] != '\0' && b < n; b++, a++)
		dest[a] = src[b];
	dest[a] = '\0';
	return (dest);
}
