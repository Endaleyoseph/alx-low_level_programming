#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int ac, char **av)
{
	char *token1, *str;
	

	if (ac != 3)
	{
		dprintf(2, "Usage: %s string symboles\n", av[0]);
		exit(98);
	}

	for (str = av[1];;str = NULL)
	{
		token1 = strtok(str, av[2]);
		if (token1 == NULL)
			exit(99);
		printf("%s\n", token1);
	}
	return (0);
}
