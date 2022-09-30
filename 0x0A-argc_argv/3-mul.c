#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two arguments
 * @argc: size of array argv
 * @argv: array of strings
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	int mul = 1;

	if (argc == 3)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
