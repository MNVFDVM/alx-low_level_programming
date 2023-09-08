#include "main.h"
/**
 * array_range - create an array of integeers
 *
 * @min: starting int
 * @max: max int
 *
 * Return: array of integers
 */
int *array_range(int min, int max)
{
	int l, j;
	int *ptr;

	if (min > max)
		return (NULL);
	l = max - min + 1;
	ptr = malloc(sizeof(int) * l);
	if (!ptr)
		return (NULL);
	for (j = 0; j < l; j++)
		ptr[j] = min++;
	return (ptr);
}
