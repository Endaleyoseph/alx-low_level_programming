#include "main.h"

/**
 * _strlen - gets the length of a string
 * @str: string
 * Return: the length of the string
 */

int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;
	return (len);
}

/**
 * create_file - creates a file
 * @filename: name of the file that is created
 * @text_content: string to be written to the file
 * Return: 1 on success, or -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int n;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	n = write(fd, text_content, _strlen(text_content));
	if (n == -1 || n != _strlen(text_content))
	{
		close(fd);
		return (-1);
	}

	close(fd);

	return (1);
}
