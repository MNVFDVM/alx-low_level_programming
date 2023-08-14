#include <stdio.h>
/**
 * main - entry point
 *
 * description: print alphabet in lower case then in upper case
 *
 * Return: Always 0 success
 */
int main(void)
{
	char ch = 'a';
	char CH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');
	return (0);
}
