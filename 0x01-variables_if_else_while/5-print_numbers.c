#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0
 */

int main(void)
{
	char c = '0';

	for (; c <= '9';)
	{
		putchar(c);
		c++;
	}
	putchar('\n');
}
