#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>


void exe(char *av[])
{
	if ((execve(av[0], av, NULL)) == -1)
	{
		perror("Error: ");
	}
}

int main(void)
{
	int stat;
	int num_of_ch;
	pid_t c_pid;
	pid_t Pid;
	char *av[] = {"/bin/ls", "-l", "/tmp", NULL};

	for (num_of_ch = 0; num_of_ch < 5; num_of_ch++)
	{
		c_pid = fork();
		if (c_pid == -1)
		{
			perror("Error:");
			return (1);
		}

		if (c_pid == 0)
		{
			Pid = getpid();
			printf("parent id: %u child id: %u\n", Pid, c_pid);
			sleep(3);
			exe(av);
		}
		else
		{
			wait(&stat);
		}
	}
	return (0);
}
