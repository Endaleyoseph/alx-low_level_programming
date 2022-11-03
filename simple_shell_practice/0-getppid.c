#include <stdio.h>
#include <unistd.h>

/**
 * main - PPID
 *
 * Return: Always 0
 */

int main(void)
{
	pid_t p_pid, c_pid;

	p_pid = getppid();
	c_pid = getpid();
	printf("parent id: %u\n current id: %u\n", p_pid, c_pid);

	return (0);
}
