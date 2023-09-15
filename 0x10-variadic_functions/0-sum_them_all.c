#include "variadic_functions.h"
/**
 * sum_them_all - sums variable arguments
 *
 * @n: number of arguments
 * @...: the integers to sum
 *
 * Return: the integer sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int c = 0, j = n;
	va_list ap;

	if (!n)
		return (0);
	va_start(ap, n);
	while (j--)
		c += va_arg(ap, int);
	va_end(ap);
	return (c);
}
