#include "main.h"

/**
  * _print_rev_recursion - main function
  *
  * @c: Function parameter
  *
  * Return: Voidu
  */
void _print_rev_recursion(char *c)
{
	if (*c)
	{
		_print_rev_recursion(c + 1);
		_putchar(*c);
	}
}
