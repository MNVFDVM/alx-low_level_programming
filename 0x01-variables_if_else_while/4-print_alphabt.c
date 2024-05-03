#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	do {
		if (c == 'q' || c == 'e')
			continue;
		putchar(c);
		c++;
	} while (c <= 'z');
	return (0);
}
