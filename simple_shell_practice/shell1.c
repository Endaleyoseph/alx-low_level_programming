#include "shell.h"
#include <stddef.h>

int main(void)
{
	int status;
	int c, j, i = 0;
	size_t s = 0;
	char *str = NULL;
	char **arg;
	pid_t pid;

	do
	{
		pid = fork();

		if (pid == 0)
		{
			sleep(3);
			printf("#Cisfun$ ");
			j = getline(&str, &s, stdin);
			if (j < 0)
			{
				printf("Terminating shell");
				return (-1);
			}
			arg = _strtok(str);
			if (execve(arg[0], arg, NULL))
			{
				perror("Error: ");
			}
		}
		else
		{
			wait(&status);
		}
	} while (WIFEXITED(status) != -1);
	printf("\n");

	return (0);
}
