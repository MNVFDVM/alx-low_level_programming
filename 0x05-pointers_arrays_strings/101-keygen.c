#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
 * main - generate random passwords for 101-keygen
 *
 * Return: 0
 */


int main(void)
{
	int sum;
	char s;

	srand(time(NULL));
	while (sum <= 2645)
	{
		s = rand() % 128;
		sum += s;
		putchar(s);
	}
	putchar(2772 - sum);
	return (0);
}

