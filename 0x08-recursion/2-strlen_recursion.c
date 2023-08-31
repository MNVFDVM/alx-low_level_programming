#include "main.h"
/**
 * _strlen_recursion - return the length of string
 *
 * @c: pointer to string
 *
 * Return: int
 */

int _strlen_recursion(char *c)
{
	int n = 0;

	if (*c > '\0')
		n += _strlen_recursion(c + 1) + 1;

	return (n);
}
