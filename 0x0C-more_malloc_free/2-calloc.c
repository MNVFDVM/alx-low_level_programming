#include "main.h"
/**
 * *_memset - fills memory with constant bytes
 *
 * @*s: pointer to the constant
 * @b: constant
 * @n: max bytes to use
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
		*s++ = b;
	return (ptr);
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
	x = malloc(sizeof(int) * m);

	if (x == 0)
		return (NULL);
	_memset(x, 0, sizeof(int) * m);
	return (x);
}
