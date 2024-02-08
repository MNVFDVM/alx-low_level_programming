#include "main.h"
/**
 * get_endianness - return the endianness of system
 *
 * Return: 1
 */
int get_endianness(void)
{
	unsigned long int m = 1;

	return (*(char *)&m);
}
