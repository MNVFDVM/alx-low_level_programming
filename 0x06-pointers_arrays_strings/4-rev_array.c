#include "main.h"
/**
 * reverse_array - reverse the content of the array into integers
 *
 * @a: array of integers
 * @n: number of elements to swap
 */

void reverse_array(int *a, int n)
{
	int i, j, c;

	for (i = 0, j = (n - 1); i < j; i++, j--)
	{
		c = a[i];
		a[i] = a[j];
		a[j] = c;
	}
}
