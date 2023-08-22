#include <stdio.h>

/**
 * main - entry point
 *
 * description: print alphabet in lower and upper case
 *
 * return: 0 success
 */


int main()
{
	char ch = 'a';
	do
	{
		putchar(ch);
		ch++;
	} while (ch <= 'z');
	
	CH = 'A';
	do
	{
		putchar(CH);
		CH++;
	} while (CH <= 'Z');
	putchar('\n');
}
