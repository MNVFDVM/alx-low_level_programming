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
		if (c == 57)
		{
			putchar((char)c);
			break;
		}
		putchar((char)c);
		putchar(',');
		putchar(' ');
		c++;
	} while (c <= 57);
	return (0);
}
