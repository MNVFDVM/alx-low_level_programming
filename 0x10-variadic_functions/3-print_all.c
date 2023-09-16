#include "variadic_functions.h"
/**
 * format_char - formats character
 *
 * @separator: string separator
 * @ap: argument pointer
 */
void format_char(char *separator, va_list ap)
{
	printf("%s%c", separator, va_arg(ap, int));
}
/**
 * format_int - format integer
 *
 * @separator: the string separator
 * @ap: argument pointer
 */
void format_int(char *separator, va_list ap)
{
	printf("%s%d", separator, va_arg(ap, int));
}
/**
 * format_float - format float
 *
 * @separator: the string separator
 * @ap: argument pointer
 */
void format_float(char *separator, va_list ap)
{
	printf("%s%f", separator, va_arg(ap, double));
}
/**
 * format_string - format string
 *
 * @separator: the string separator
 * @ap: argument pointer
 */
void format_string(char *separator, va_list ap)
{
	char *s = va_arg(ap, char *);

	switch ((int)(!s))
		case 1:
			s = "(nil)";
	printf("%s%s", separator, s);
}
/**
 * print_all - print anything
 *
 * @format: the format string
 */
void print_all(const char * const format, ...)
{
	int x = 0, y;
	char *separator = "";
	va_list ap;
	token_t tokens[] = {
		{"c", format_char},
		{"i", format_int},
		{"f", format_float},
		{"s", format_string},
		{NULL, NULL}
	};

	va_start(ap, format);
	while (format && format[x])
	{
		y = 0;
		while (tokens[y].token)
		{
			if (format[x] == tokens[y].token[0])
			{
				tokens[y].f(separator, ap);
				separator = ", ";
			}
			y++;
		}
		x++;
	}
	printf("\n");
	va_end(ap);
}
