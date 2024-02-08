#include "main.h"
/**
 * set_bit - set bit at index
 *
 * @n: number to index
 * @index: bit to set
 *
 * Return: 1 success
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return (!!(*n |= 1L << index));
}
