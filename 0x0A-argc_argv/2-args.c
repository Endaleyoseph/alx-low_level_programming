#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments
 * @argc: size of array argv
 * @argv: array of strings
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	int i = 0;

	if (argc > 0)
	{
		while (i < argc)
		{
			printf("%s\n", argv[i]);
			i++;
		}
	}
	return (0);
}
