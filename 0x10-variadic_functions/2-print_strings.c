#include "variadic_functions.h"

/**
 * print_strings - print strings with separator
 *
 * @separator: the string separator
 * @n: the number of arguments
 * @...: the strings to print
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	int j = n;
	char *s;
	va_list ap;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	while (j--)
		printf("%s%S", (s = va_arg(ap, char *)) ? s : "(nil)", i ? (separator ? separator : "") : "\n");
	va_end(ap);
}
