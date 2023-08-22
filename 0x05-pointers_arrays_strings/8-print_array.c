#include "main.h"

/**
 * print_array - print n elements of arary of integers
 *
 * @n: elements parameter
 * @b: string parameter
 */

void print_array(int *b, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
			printf("%d, ", b[i]);
		else
			printf("%d", b[i]);
	}
	printf("\n");
}

