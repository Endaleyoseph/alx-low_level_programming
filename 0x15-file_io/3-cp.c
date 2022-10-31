#include "main.h"

/**
 * __exit - prints error messages with exit code
 * @error: the error type
 * @s: file name
 * @fd: file descriptor
 * Return: 0 on success
 */

int __exit(int error, char *s, int fd)
{
	switch (error)
	{
		case 97:
			dprintf(2, "Usage: cp file_from file_to\n");
			exit(error);
		case 98:
			dprintf(2, "Error: Can't read from file %s\n", s);
			exit(error);
		case 99:
			dprintf(2, "Error: Can't write to %s\n", s);
			exit(error);
		case 100:
			dprintf(2, "Error: Can't close fd %d\n", fd);
			exit(error);
		default:
			return (0);
	}
}

/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 (success)
 */

int main(int argc, char **argv)
{
	int fd_1, fd_2, n_r, n_w;
	char buf[1024];

	if (argc != 3)
		__exit(97, NULL, 0);

	fd_1 = open(argv[1], O_RDONLY);
	if (fd_1 == -1)
		__exit(98, argv[1], 0);

	fd_2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_2 == -1)
		__exit(99, argv[2], 0);

	while ((n_r = read(fd_1, buf, 1024)) != 0)
	{
		if (n_r == -1)
			__exit(98, argv[1], 0);

		n_w = write(fd_2, buf, n_r);
		if (n_w == -1)
			__exit(99, argv[2], 0);
	}

	if (close(fd_1) == -1)
		__exit(100, NULL, fd_1);
	close(fd_1);
	if (close(fd_2) == -1)
		__exit(100, NULL, fd_2);
	close(fd_2);
	return (0);
}
