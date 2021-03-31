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
	char *buf;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(letters);
	if (!buf)
		return (0);
	count = read(fd, buf, letters);
	if (write(STDOUT_FILENO, buf, count) < 0)
		count = 0;
	close(fd);
	free(buf);
	return (count);
}
