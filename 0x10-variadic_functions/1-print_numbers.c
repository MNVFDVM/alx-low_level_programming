#include "variadic_functions.h"

/**
 * print_numbers - print sumbers with separator
 *
 * @separator: the string separator
 * @n: number of arguments
 * @...: the integers to print
 *
 * Return: vois
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int j = n;
	va_list ap;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	while (j--)
		printf("%d%s", va_arg(ap, int), i ? (separator ? separator : "") : "\n");
	va_end(ap);
}
