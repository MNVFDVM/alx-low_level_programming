#include "main.h"
/**
 * more_numbers - print 0 - 14 ten times
 *
 * Return: always 0 (success)
 */
void more_numbers(void)
{
	int n, row, i;

	for (row = 1; row <= 10; row++)
	{
		for (i = 0; i <= 14; i++)
		{
			n = i;
			if (i > 9)
			{
				_putchar(1 + 48);
				n = i % 10;
			}
			_putchar(n + 48);
		}
		_putchar('\n');
	}
}
