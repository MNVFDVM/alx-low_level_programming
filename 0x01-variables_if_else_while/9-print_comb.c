#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	int c = 48;

	do {
		putchar((char)c);
		if (c != 57)
		{
			putchar(',');
			putchar(' ');
		}
		c++;
	} while (c <= 57);
	putchar('\n');
	return (0);
}
