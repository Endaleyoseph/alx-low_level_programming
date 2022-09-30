#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - change from money
 * @argc: size of array argv
 * @argv: array of strings
 * Return: 0 for success or 1 for error
 */

int main(int argc, char **argv)
{
	int i, change = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (argv[1][0] == '-')
	{
		printf("%d", change);
		return (0);
	}

	i = atoi(argv[1]);

	change += i / 25;
	i = i % 25;
	change += i / 10;
	i = i % 10;
	change += i / 5;
	i = i % 5;
	change += i / 2;
	i = i % 2;
	change += i / 1;
	printf("%d\n", change);
	return (0);
}
