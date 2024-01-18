#include "main.h"
/**
 * *_memset - fill memory with constant byte
 *
 * @c: pointer to put the constant
 * @b: constant
 * @n: max bytes to use
 *
 * Return: c
 */
char *_memset(char *c, char b, unsigned int n)
{
	char *ptr = c;

	while (n--)
		*c++ = b;
	return (ptr);
}
/**
 * *_calloc - allocate memory for an array using malloc
 *
 * @nmemb: array length
 * @size: size of each element
 *
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *n;

	if (size == 0 || nmemb == 0)
		return (NULL);
	n = malloc(sizeof(int) * nmemb);
	if (n == 0)
		return (NULL);
	_memset(n, 0, sizeof(int) * nmemb);

	return (n);
}
