#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * main - multipies two positive numbers
 * @argc: first number
 * @argv: array of strings
 * Return: 0 on success, 98 on failure
 */

int main(int argc, char **argv)
{
	unsigned int num1, num2, mul, j;
	int i;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; j < strlen(argv[i]); j++)
		{
			if (!(argv[i][j] >= 48 && argv[i][j] <= 57))
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	mul = num1 * num2;

	printf("%d\n", mul);
	return (0);
}
