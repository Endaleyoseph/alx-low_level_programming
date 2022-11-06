#include "shell.h"
#include <stddef.h>


int main(void)
{
	int status;
	int c, i = 0;
	char *str;
	char **arg;
	pid_t pid;

	do
	{
		pid = fork();

		if (pid == 0)
		{
			sleep(3);
			printf("#Cisfun$ ");
			str = read_line();
			arg = _strtok(str);
			if (execve(arg[0], arg, NULL))
			{
				perror("Error: ");
			}
		}
		else
		{
			wait(&status);
			c = WIFEXITED(status);
		}
		i++;
	} while (i < 3 && c == 1);
	printf("\n");

	return (0);
}
