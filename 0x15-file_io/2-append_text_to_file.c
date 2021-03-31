#include "holberton.h"

/**
 * append_text_to_file - appends text to the end of a file
 * @filename: name of new file
 * @text_content: text to add to file data
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, count = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (!text_content)
	{
		close(fd);
		return (1);
	}
	count = _strlen(text_content);
	if (write(fd, text_content, count) < 0)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
/**
 * _strlen - finds the length of a string
 * @s: string input
 * Return: string length, or 0 on error
 */
int _strlen(char *s)
{
	int i;

	if (!s)
		return (0);
	for (i = 0; s[i]; i++)
		;
	return (i);
}
