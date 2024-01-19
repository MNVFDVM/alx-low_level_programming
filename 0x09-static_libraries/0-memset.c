#include "main.h"

/**
 * *_memset - fill memory with constant byte
 *
 * @s: pointer to constant
 * @b: constant
 * @n: maxmum  bytes to use
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
		s[i] = b;
	return (s);
}
