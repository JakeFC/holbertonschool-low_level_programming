#include "holberton.h"

/**
 * *_strcpy - copies a string to another variable
 * @dest: destination variable
 * @src: string source
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
		dest[a] = src[a];
		dest[a] = '\0';
	return (dest);
}
