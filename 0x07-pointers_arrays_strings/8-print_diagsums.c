#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - description
 *
 * @a: 2 nd array of int type
 * @size: size of array
 */

void print_diagsums(int *a, int size)
{
	int i, n1 = 0, n2 = 0;

	for (i = 0; i < size; i++)
	{
		n1 += a[i];
		n2 += a[size - i - 1];
		a += size;
	}
	printf("%d, ", n1);
	printf("%d\n", n2);
}
