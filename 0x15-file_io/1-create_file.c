#include "holberton.h"

/**
 * create_file - creates a file
 * @filename: name of new file
 * @text_content: text to add to file data
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, count;

	if (!filename)
		return (-1);
	if (!text_content)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	count = sizeof(text_content) - 1;
	if (write(fd, text_content, count) < 0)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
