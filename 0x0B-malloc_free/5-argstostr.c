#include "holberton.h"
#include <stdlib.h>
int _strlen(char *s);

/**
 * argstostr - concatenates all the arguments of a program
 * @ac: argument count
 * @av: array of argument strings
 * Return: pointer to new string, or NULL if failure
 */
char *argstostr(int ac, char **av)
{
	char *c;
	int i, ii;
	int len = 0;
	int cc = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		len += _strlen(av[i]);
	c = malloc(++len);
	if (c == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (ii = 0; av[i][ii] != 00; ii++, cc++)
			c[cc] = av[i][ii];
	c[cc++] = '\n';
	}
	c[cc] = 00;
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
