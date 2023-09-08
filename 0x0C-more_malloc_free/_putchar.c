#include <unistd.h>
/**
 * _putchar - write the character c to std out
 *
 * @c: the character to print
 *
 * Return: 1 success, -1 error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
