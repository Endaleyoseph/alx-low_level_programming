#include "shell.h"

char *read_line(void)
{
	char *str = NULL;
	size_t bufsize = 0;

	if (getline(&str, &bufsize, stdin) == -1)
	{
		if (feof(stdin))
		{
			printf("Desconectado del terminal ...\n");
			exit(EXIT_SUCCESS);
		}
		else
		{
			perror("can't read line");
			exit(EXIT_FAILURE);
		}
	}
	return (str);
}
