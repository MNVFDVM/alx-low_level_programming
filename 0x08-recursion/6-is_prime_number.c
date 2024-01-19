#include "main.h"

int actual_prime(int m, int i);

/**
 * is_prime_number - says if an integer is a prime number or not
 * @k: number to evaluate
 *
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int k)
{
	if (k <= 1)
		return (0);
	return (actual_prime(k, k - 1));
}

/**
 * actual_prime - calculates if a number is prime recursively
 * @m: number to evaluate
 * @i: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */
int actual_prime(int m, int i)
{
	if (i == 1)
		return (1);
	if (m % i == 0 && i > 0)
		return (0);
	return (actual_prime(m, i - 1));
}
