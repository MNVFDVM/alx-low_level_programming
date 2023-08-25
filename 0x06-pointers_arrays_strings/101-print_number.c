#include "main.h"

/**
 * print_number - print numbers chars
 *
 * @i: integer
 *
 * Return: 0
 */
void print_number(int i)
{
	unsigned int n;

	n = i;
	if (i < 0)
	{
		_putchar('-');
		n = -i;
	}
	if (n / 10 != 0)
		print_number(n / 10);
	_putchar((n % 10) + '0');
}
