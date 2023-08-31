#include "main.h"

/**
 * factorial - find factorial
 *
 * @c: int
 *
 * Return: int
 */

int factorial(int c)
{
	if (c < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (c * factorial(c - 1));
}
