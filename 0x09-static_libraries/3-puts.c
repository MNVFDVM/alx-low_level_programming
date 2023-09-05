#include "main.h"

/**
 * _puts - print string to stdout
 *
 * @string: string parameter
 */

void _puts(char *string)
{
	while (*string != '\0')
	{
		_putchar(*string + 0);
		string++;
	}
	_putchar('\n');
}

