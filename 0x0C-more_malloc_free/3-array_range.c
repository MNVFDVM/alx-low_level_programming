#include "main.h"
/**
 * array_range - create an array of integers
 *
 * @min: starting int
 * @max: max int
 *
 * Return: arary of integers
 */
int *array_range(int min, int max)
{
	int l, x;
	int *ptr;

	if (min > max)
		return (NULL);
	l = max - min + 1;
	ptr = malloc(sizeof(int) * l);
	if (!ptr)
		return (NULL);
	for (x = 0; x < len; x++)
		ptr[x] = min++;
	return (ptr);
}
