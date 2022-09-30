#include "main.h"
#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: the size of argc
 * @argc: the array of strings
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}
