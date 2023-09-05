#include <stdio.h>
#include "main.h"

/**
 * _putchar - write the character c to stdout
 *
 * @c: the chracter to print
 *
 * Return: 1 success, -1 error
 */

int _puchar(char c)
{
	return (write(1, &c, 1));
}
