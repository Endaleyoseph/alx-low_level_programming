#include <stdio.h>
#include <stdlib.h>

/**
 * main - print av arguments
 * ac: number of args
 * av: array of args
 * Return: Always 0 (on success)
 */

int main(int ac, char **av)
{
	(void)ac;
	int i = 0;

	while (av[i] != NULL)
	{
		printf("%s\n", av[i]);
		i++;
	}
	return (0);
}
