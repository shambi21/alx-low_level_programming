#include "main.h"
#include <stdio.h>

/**
 * print_array - print n elements of an array
 * @a: array pointer
 * @n: type integer
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (n > 0 && i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}