#include "holberton.h"

/**
 * main - copies the content of one file to another
 * @argc: argument count
 * @argv: pointer to array of argument strings
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int from, to, count;
	char buf[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	from = open(argv[1], O_RDONLY);
	if (from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	to = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(from), exit(99);
	}
	for (count = read(from, buf, 1024); count > 0; count = read(from, buf, 1024))
	{
		if (count < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		if (write(to, buf, count) < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(from), close(to), exit(99);
		}
	}
	if (close(from) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from);
		close(to), exit(100);
	}
	if (close(to) < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to), exit(100);
	return (0);
}
