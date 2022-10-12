#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: size of array argv
 * @argv: array of strings
 * Return: Always 0
 */

int main(int argc,char **argv)
{
	int calc, num1, num2;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	f = get_op_func(argv[2]);
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (f == NULL || (argv[2][1] != '\0'))
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && argv[3][0] == '0')
	{
		printf("Error\n");
		exit(100);
	}
	calc = f(num1, num2);
	printf("%d\n", calc);

	return (0);
}
