#include "shell.h"
#include <stddef.h>


int _execute(char **arg)
{
	int status, c;
	pid_t pid;

	pid = fork();
	if (pid < 0)
		perror("Error: ");

	if (pid == 0)
	{
		if (execve(arg[0], arg, NULL) == -1)
		{
			perror("Error: ");
		}
	}

	else
	{
		wait(&status);
	}

	return (1);
}
