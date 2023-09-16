#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - print strings with separator
 *
 * @separator: the string separator
 * @n: number of arguments
 * @...: the string to print
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list  t;
	char *s;
	unsigned int i;

	va_start(t, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(t, char *);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(t);
}
