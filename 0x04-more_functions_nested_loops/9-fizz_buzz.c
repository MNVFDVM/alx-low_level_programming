#include "main.h"
/**
 * main - print numbers 1 - 100
 *	multiplies of 3 print Fizz
 *	multiplies of 5 print Buzz
 *	multiplies of 3 and 5 print FizzBuzz
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0 && !(n % 5 == 0))
			printf("Fizz");
		else if (n % 5 == 0 && !(n % 3 == 0))
			printf("Buzz");
		else if (n % 3 == 0 && n % 5 == 0)
			printf("FizzBuzz");
		else
			printf("%d", n);
		if (n != 100)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
