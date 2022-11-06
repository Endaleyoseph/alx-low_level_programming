#include <stdio.h>
#include <unistd.h>



int main(void)
{
	pid_t id;

	id = fork();

	printf("the pid for the process %u\n", id);

	return (0);
}
