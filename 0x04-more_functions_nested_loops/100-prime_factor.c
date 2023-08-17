#include <stdio.h>
/**
 * _sqrt - compute the square root
 *
 * @y: input number
 *
 * Return: square root of y
 */
double _sqrt(double y)
{
	float sqrt, tmp;

	sqrt = y / 2;
	tmp = 0;

	while (sqrt != tmp)
	{
		tmp = sqrt;
		sqrt = (y / tmp + tmp) / 2;
	}
	return (sqrt);
}
/**
 * largest_prime_factor - finds the largest prime factor of n
 *
 * @n: the number
 */
void largest_prime_factor(long int n)
{
	int largest, primeN;

	while (n % 2 == 0)
		n = n / 2;
	for (primeN = 3; primeN <= _sqrt(n); primeN += 2)
	{
		while (n % primeN == 0)
		{
			n = n / primeN;
			largest = primeN;
		}
	}
	if (n > 2)
		largest = 2;
	printf("%d\n", largest);
}
/**
 * main - entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	largest_prime_factor(612852475143);
	return (0);
}


