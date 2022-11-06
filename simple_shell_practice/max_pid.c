#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>


int main(int ac, char **av)
{
	char *argv[] ={NULL,"Hello", "world", NULL};


	argv[0] = av[1];
	if (execve(argv[0], argv, NULL) == -1)
	{
		perror("Error: ");
	}

	return (0);
}
