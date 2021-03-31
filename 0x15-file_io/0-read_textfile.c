#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to stdout
 * @filename: name of file in a string
 * @letters: number of letters to read and print
 * Return: number of letters actually read and printed, or 0 on error
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t count;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	count = read(fd, STDOUT_FILENO, letters);
	close(fd);
	if (count < 0)
		return (0);
	return (count);
}
