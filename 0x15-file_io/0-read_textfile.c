#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the name of the file
 * @letters: the number of letters it should read and print
 * Return: number of letters that can be printed
 * or 0 if it fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t n1, n2;
	int fd;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
			return (0);

	n1 = read(fd, buffer, letters);
	if (n1 == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	n2 = write(STDOUT_FILENO, buffer, n1);
	if (n2 == -1)
	{
		free(buffer);
		close(fd);

		return (0);
	}
	close(fd);

	return (n1);
}
