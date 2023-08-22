#include "main.h"

/**
 * print_rev - print reversed string
 *
 * @c: pointer to the string
 */

void print_rev(char *c)
{
	int i = 0;

	while (c[i])
		i++;
	while (i--)
		_putchar(c[i]);
	_putchar('\n');
}
