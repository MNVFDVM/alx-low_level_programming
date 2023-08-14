#include <stdio.h>
/**
 * main - entry point
 *
 * description: print alphabets from z to a
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
