#include "main.h"

/**
 * _sqrt_recursion - find natural square root
 *
 * @c: int
 * @i: square root
 *
 * Return: int
 */

int square(int c, int i);
int _sqrt_recursion(int c)
{
	return (square(c, 1));
}

/**
 * square - find square root
 *
 * @c: int to find square root
 * @i: square root
 *
 * Return: int
 */
int square(int c, int i)
{
	if (i * i == c)
		return (i);
	else if (i * i < c)
		return (square(c, i + 1));
	else
		return (-1);
}
