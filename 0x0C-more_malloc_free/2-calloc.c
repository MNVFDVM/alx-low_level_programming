#include <stdlib.h>
#include "main.h"
/**
 * *_memset - fills memory with constant bytes
 *
 * @s: pointer to the constant
 * @b: constant
 * @n: max bytes to use
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
/**
 * *_calloc - allocates memory from array using malloc
 *
 * @m: array length
 * @size: size of each element
 *
 * Return: pointer
 */
void *_calloc(unsigned int m, unsigned int size)
{
	void *x;

	if (size == 0 || m == 0)
		return (NULL);
	x = malloc(size * m);

	if (x == NULL)
		return (NULL);
	_memset(x, 0, size * m);
	return (x);
}
