#include <stdio.h>


int main()
{
	char ch = 'a';
	do
	{
		putchar(ch);

		ch++;
	} while (ch <= 'z');
	putchar('\n');
}
