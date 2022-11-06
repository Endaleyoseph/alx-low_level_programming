#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>


int main(void)
{
	pid_t cpid;
	pid_t p_pid;
	int status;

	cpid = fork();

	if (cpid == -1)
	{
		perror("Error:");
		return (1);
	}
	p_pid = getpid();
	if (cpid == 0)
	{
		printf("THis is the child process ID: %u\n", p_pid);
		sleep(3);
	}
	else
	{
		wait(&status);
		printf("This is the parent process ID: %u\n", p_pid);
	}
	return (0);
}
