#include "variadic_functions.h"
/**
 * print_strings - print strings with separator
 *
 * @separator: the string separator
 * @n: number of arguments
 * @...: the string to print
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
		printf("%s%s", (s = va_arg(ap, char *)) ? s : "(nil)",
				i ? (separator ? separator : "") : "\n");
	va_end(ap);
}
