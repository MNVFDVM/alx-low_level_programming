#include <stdio.h>


int main()
{
	char ch = 'a';
	for (; ch <=  'z'; ch++)
	{
		if (ch == 'q' || ch == 'e')
			continue;
	}
	putchar('\n');
