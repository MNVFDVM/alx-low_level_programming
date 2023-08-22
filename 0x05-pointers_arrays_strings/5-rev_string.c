#include "main.h"

/**
 * rev_string - reverse a string
 *
 * @c: string parameter
 */

void rev_string(char *c)
{
	int l, i;
	char tmp;

	for (l = 0; c[l] != '\0'; ++l)
		;
	for (i = 0; i < l / 2; i++)
	{
		tmp = c[i];
		c[i] = c[l - 1 - i];
		c[l - 1 - i] = tmp;
	}
}
