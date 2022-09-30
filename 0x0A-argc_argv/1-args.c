#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments
 * @agc: the size of array
 * @argv: the array of string
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	(void)**argv;
	printf("%d\n", argc - 1);

	return (0);
}
