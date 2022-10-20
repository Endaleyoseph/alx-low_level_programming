#include <stdio.h>

/**
 * execute_first - executes before main fi=unction is excuted
 *
 * Return: Always 0
 */

void __attribute__ ((constructor)) execute_first()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
