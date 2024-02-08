#include "main.h"
/**
 * get_bit - get bit at index
 *
 * @n: number to index
 * @index: bit to get
 *
 * Return: bit state
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return (n >> index & 1);
}
