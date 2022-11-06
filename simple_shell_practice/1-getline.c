#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * main - read line
 * @ac: number of args
 * @av: array
 * Return: Always 0
 */
char *lsh_read_line(void)
{
	char *line = NULL;
	size_t bufsize = 0;
	
	if (getline(&line, &bufsize, stdin) == -1)
	{
		if (feof(stdin))
		{
			printf("ctrl+D\n");
			exit(EXIT_SUCCESS);
		}
		else
		{
			perror("readline");
			exit(EXIT_FAILURE);
		}
	}
	return line;
}
int main(void)
{
	char *buffer;

	printf("#cisfun$ ");
	buffer = lsh_read_line();
	if (buffer == NULL)
		return (-1);
	printf("%s", buffer);


	return (0);
}
