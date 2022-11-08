#include "shell.h"
#include <stddef.h>


int main(void)
{
	int c, i = 0;
	char *str;
	char **arg;
	pid_t pid;

	do
	{
		printf("#Myshell$ ");
		str = read_line();
		arg = _strtok(str);
		c = _execute(arg);
	} while (1);
	printf("\n");

	return (0);
}
