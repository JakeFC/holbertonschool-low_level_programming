#include "holberton.h"

/**
 * set_string - sets the value of a pointer to a char string
 * @s: pointer to desired value
 * @to: target string
 */
void set_string(char **s, char *to)
{
	*(s + 0) = to;
}
