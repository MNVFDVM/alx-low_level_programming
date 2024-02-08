#include "main.h"
/**
 * flip_bits - return number of bits that need to be flipped
 *
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to flip to convert number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m;
	unsigned int c = 0;

	while (x)
	{
		if (x & 1ul)
			c++;
		x = x >> 1;
	}
	return (c);
}
