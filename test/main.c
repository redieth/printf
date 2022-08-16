#include "../main.h"
#include <stdio.h>

int main(void)
{
	int n = 0;

	n = _printf("%%\n");
	printf("N: %d\n", n);
	n = printf("%%\n");
	printf("N: %d\n", n);

	return (0);
}
