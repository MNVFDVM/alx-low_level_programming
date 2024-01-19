#include "main.h"
/**
  * _pow_recursion - function name
  * @i: parameter 1
  * @j: parameter 2
  * Return: value of a given number passed to the function
  */


int _pow_recursion(int i, int j)
{

	if (j < 0)
		return (-1);

	else if (j == 0)
		return (1);

	else
		return (i * _pow_recursion(i, (j - 1)));

	return (0);
}
