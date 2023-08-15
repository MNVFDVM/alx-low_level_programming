#include "main.h"
/**
 * main - entry point
 *
 * description: computes the sum of all multiples of 3 or 5 below 1024
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int n, sum;

i	for (n = 0; n < 1024; n++)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
			sum += n;
	}
	printf("%d\n", sum);
	return (0);
}
