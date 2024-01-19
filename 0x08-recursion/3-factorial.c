#include "main.h"

/**
  * factorial - function parameter
  *
  * @m: function parameter
  *
  * Return: Function m.
  */
int factorial(int m)
{
	if (m < 0)
		return (-1);
	if (m == 0)
		return (1);
	return (m * factorial(m - 1));
}
