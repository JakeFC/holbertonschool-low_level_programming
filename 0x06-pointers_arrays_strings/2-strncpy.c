#include "holberton.h"

/**
 * _strncpy - copies n bytes from src string to dest string
 * @dest: destination string
 * @src: string to add
 * @n: max bytes from src
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; src[a] != '\0' && a < n; a++)
		dest[a] = src[a];
	for (; a <= n; a++)
		dest[a] = '\0';
	return (dest);
}
