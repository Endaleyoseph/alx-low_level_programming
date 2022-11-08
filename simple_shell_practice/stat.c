#include "shell.h"



int main(int ac, char **av)
{
	struct stat st;
	int i;

	if (ac < 2)
	{
		dprintf(2, "Error: Usage %s file path ...\n", av[0]);
		return (1);
	}
	
	for (i = 1; av[i] != NULL; i++)
	{
		if (stat(av[i], &st) == -1)
		{
			perror("Error: ");
		}
		else
		{
			printf("file found stat mod: %o\n", st.st_mode);
		}
	}

	return (0);
}
