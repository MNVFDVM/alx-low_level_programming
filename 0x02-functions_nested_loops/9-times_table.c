#include "main.h"
/**
 * time_table - function to print 9 time table
 */
void time_table(void)
{
	int n, mul product;

	for (n = 0; n <= 9; n++)
	{
		_putchar(48);
		for (mul = 1; mul <= 9; mul++)
		{
			_putchar(',');
			_putchar(' ');
			product = n * mul;
			if (product <= 9)
				_putchar(' ');
			else
				_putchar((product / 10) + 48);
			_putchar((product % 10) + 48);
		}
		_putchar('\n');
	}
}
