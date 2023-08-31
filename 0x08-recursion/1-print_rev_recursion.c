#include "main.h"

/**
 * _print_rev_recursion - print string in reverse
 *
 * @c: pointer to string
 */

void _print_rev_recursion(char *c)
{
	if (*c > '\0')
	{
		_print_rev_recursion(c + 1);
		_putchar(*c);
	}
}
