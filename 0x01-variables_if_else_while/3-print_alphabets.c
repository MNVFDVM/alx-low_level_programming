#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	char c = 97;

	for(; c <= 122; )
	{
		putchar(c);
		c++;
	}
	c = 65;
	for (; c <= 90;)
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
