#include "holberton.h"

/**
 * get_endianness - checks the endianness of the system
 * Return: 0 for big endian, 1 for little
 */
int get_endianness(void)
{
	int x = 1;

	char *addr = (char *)&x;
	return (addr[0] + '0');
}
