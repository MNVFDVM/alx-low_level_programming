#include "main.h"

/**
  * _puts_recursion - main function
  *
  * @c: function parameter
  *
  * Return: Always 0.
  */
void _puts_recursion(char *c)
{
	if (*c)
	{
		_putchar(*c);
		_puts_recursion(c + 1);
	}
	else
		_putchar('\n');
}
