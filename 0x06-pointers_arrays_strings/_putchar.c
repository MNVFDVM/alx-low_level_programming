#include <unistd.h>
/**
 * _putchar - write c to stdout
 *
 * @c: the character 
 *
 * return: 1 success, -1 error
 */
int _putchar(char c)
{
	return(write(1, &c, 1);
}
