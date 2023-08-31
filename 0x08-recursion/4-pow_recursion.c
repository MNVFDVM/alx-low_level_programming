#include "main.h"

/**
 * _pow_recursion - search a string for any set of bytes
 *
 * @i: base
 * @j: exposant
 *
 * Return: pointer
 */

int _pow_recursion(int i, int j)
{
	if (j < 0)
		return (-1);
	else if (j == 1)
		return (i);
	else if (j == 0)
		return (1);
	return (i * _pow_recursion(i, j - 1));
}
