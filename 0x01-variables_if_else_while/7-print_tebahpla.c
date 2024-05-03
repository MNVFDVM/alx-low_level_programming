#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	char c = 'z';

	do {
		putchar(c);
		c--;
	} while (c >= 'a');
	putchar('\n');
	return (0);
}
