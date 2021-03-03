#include "holberton.h"
#include <stdlib.h>
int _strlen(char *s);
char *_strcat(char *dest, char *src);
char *_strcpy(char *dest, char *src);

/**
 * argstostr - concatenates all the arguments of a program
 * @ac: argument count
 * @av: array of argument strings
 * Return: pointer to new string, or NULL if failure
 */
char *argstostr(int ac, char **av)
{
	char *c;
	int i;
	int len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		len += _strlen(av[i]);
	len++;
	c = malloc(len);
	if (c == NULL)
		return (NULL);
	_strcpy(c, av[0]);
	for (i = 1; i < ac; i++)
		_strcpy(c, _strcat(c, av[i]));
	for (i = 0; c[i] != '\0';)
		i++;
	c[i] = '\n';
	c[++i] = 00;
	return (c);
}

/**
 * _strcat - appends src string to the dest string
 * @dest: destination string
 * @src: string to add
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int a, b;

	for (a = 0; dest[a] != '\0';)
		a++;
	dest[a++] = '\n';
	for (b = 0; src[b] != '\0'; b++, a++)
		dest[a] = src[b];
	dest[a] = '\0';
	return (dest);
}

/**
 * _strlen - returns the length of a string
 * @s: string input
 * Return: string length
 */
int _strlen(char *s)
{
	int a;

	a = 0;
	while (*(s + a) != '\0')
		a++;
	return (a);

}
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
