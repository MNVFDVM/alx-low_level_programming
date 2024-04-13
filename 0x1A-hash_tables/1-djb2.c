#include "hash_tables.h"

/**
 * hash_djb2 - function to compute hash of 'str' using djb2
 * @str: string to hash
 *
 * Return: value of 64 bits hash
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int h;
	int s;

	h = 5381;
	while ((s = *str++))
	{
		h = ((h << 5) + h) + s; /* h * 33 + s */
	}
	return (h);
}
