#include "main.h"
/**
 * main - entry point
 *
 * description: print the sum of even valued
 *		 fibonacci series not exceeded 4 million
 *
 * Return: always 0 (success)
 */
int main(void)
{
	unsigned long n1 = 0, n2 = 1, sum;
	float total;

	while (1)
	{
		sum = n1 + n2;
		if (sum > 4000000)
			break;
		if ((sum % 2) == 0)
			total += sum;
		n1 = n2;
		n2 = sum;
	}
	printf("%.of\n", total);
	return (0);
}

