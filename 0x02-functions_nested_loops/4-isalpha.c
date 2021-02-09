#include <ctype.h>

/**
 * _islower - checks for lowercase
 * Return: 1 or 0, if lower or not
 */
int _isalpha(int c);

int _isalpha(c)
{
	if (isalpha (c))
		return (1);
	else
		return (0);
}
