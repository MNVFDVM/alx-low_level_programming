#include "main.h"
/**
 * _isdigit - check if the input is digit between 1 and 9
 *
 * @n: the input
 *
 * Return: 1 if it is digit and 0 if not
 */
int _isdigit(int n)
{
	if (n >= 48 && n <= 57)
		return (1);
	else
		return (0);
}
