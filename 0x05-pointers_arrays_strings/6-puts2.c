#include "main.h"

/**
 * puts2 - print every character of string
 *
 * @string: string parameter
 */

void puts2(char *string)
{
	int i;

	for (i = 0; string[i] != '\0'; ++i)
	{
		if (i % 2 == 0)
			_putchar(string[i]);
	}
	_putchar('\n');
}
