#include <unistd.h>
/**
 * _putchar - write character c to stdout
 *
 * @c: the character
 *
 * Return: 1 success, -1 error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
