#include "holberton.h"
#include <stdlib.h>
int _strlen(char *s);
char *str_concat(char *s1, char *s2);
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
	c = malloc(++len);
	if (c == NULL)
		return (NULL);
	_strcpy(c, av[0]);
	for (i = 1; i < ac; i++)
		_strcpy(c, str_concat(c, av[i]));
	for (i = 0; c[i] != '\0';)
		i++;
	c[i] = '\n';
	c[++i] = 00;
	return (c);
}

/**
 * str_concat - creates a copy of s1 with s2 added to the end
 * @s1: string input
 * @s2: second string input
 * Return: pointer to new string, or 0 if insufficient memory
 */
char *str_concat(char *s1, char *s2)
{
	char *c;
	unsigned int a, b, i, ii;

	if (s1 == NULL)
		a = 0;
	else
		for (a = 0; s1[a] != 00;)
			a++;
	if (s2 == NULL)
		b = 0;
	else
		for (b = 0; s2[b] != 00;)
			b++;
	c = malloc(a + b + 2);
	if (c == NULL)
		return (0);
	for (i = 0; i < a; i++)
		c[i] = s1[i];
	c[i++] = '\n';
	for (ii = 0; i < (a + b + 1); i++, ii++)
		c[i] = s2[ii];
	c[i] = 00;
	return (c);
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
