#include "main.h"


/**
 * puts_half - print second half of string
 *
 * @string: string
 */

void puts_half(char *string)
{
	int i;

	for (i = 0; string[i] != '\0'; i++)
		;
	i++;
	for (i /= 2; string[i] != '\0'; i++)
		_putchar(string[i]);
	_putchar('\n');
}
