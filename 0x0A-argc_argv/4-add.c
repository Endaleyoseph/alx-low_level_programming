#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the sum of numbers
 * @argc: size of array argv
 * @argv: array of strings
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	int i, sum = 0;

	if (argc <= 1)
	{
		printf("%d\n", sum);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (*argv[i] >= 48 && *argv[i] <= 57)
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
