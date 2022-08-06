#include <limits.h>
#include <stdio.h>
#include "main.h"

int main (void)
{
	int n = _printf("%i", 98);
	printf("\nn = %d \n", n);

	return (0);
}
