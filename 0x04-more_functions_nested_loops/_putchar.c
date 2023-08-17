#include <unistd.h>
#include "main.h"
/**
 *  _putchar - write the character of c to the stdout
 * @c: the character to print
 *
 * Return: 1 on success , -1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1);
}
