#include "main.h"
int actual_sqrt_recursion(int m, int i);
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @k: number to calculate the square root of
 *
 * Return: the resulting square root
 */
int _sqrt_recursion(int k)
{

	if (k < 0)
		return (-1);
	return (actual_sqrt_recursion(k, 0));
}

/**
 * actual_sqrt_recursion - recurses to find the natural
 * square root of a number
 * @m: number to calculate the sqaure root of
 * @i: iterator
 *
 * Return: the resulting square roo
 */
int actual_sqrt_recursion(int m, int i)
{
	if (i * i > m)
		return (-1);
	if (i * i == m)
		return (i);
	return (actual_sqrt_recursion(m, i + 1));
}
