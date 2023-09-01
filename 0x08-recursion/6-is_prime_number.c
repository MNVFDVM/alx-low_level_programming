#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - check if n is prime number
 *
 * @o: int
 * @n: int
 *
 * Return: 0 or 1
 */

int check_prime(int n, int o);
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 * check_prime - check all number less than n if they can divide it
 *
 * @n: int
 * @o: int
 *
 * Return: int
 */

int check_prime(int n, int o)
{
	if (o >= n && n > 1)
		return (1);
	else if (n % o == 0 || n <= 1)
		return (0);
	else
		return (check_prime(n, o + 1));
}
