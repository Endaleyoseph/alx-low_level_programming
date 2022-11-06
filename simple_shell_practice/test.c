#include <stdio.h>
#include <unistd.h>

int main(void)
{
	int c;

	c = getchar();

	printf("%d\n", c);
	return (0);
}
