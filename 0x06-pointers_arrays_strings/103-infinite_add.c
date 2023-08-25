#include "main.h"
/**
 * infinite_add - add two numbers
 *
 * @n1: first number
 * @n2: second number
 * @r: result
 * @size_r: result
 *
 * Return: sum
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int m = 0, n = 0, k, l = 0, f, s, d = 0;

	while (n1[m] != '\0')
		m++;
	while (n2[n] != '\0')
		n++;
	if (m > n)
		l = m;
	else
		l = n;
	if (l + 1 > size_r)
		return (0);
	r[l] = '\0';
	for (k = l - 1; k >= 0; k--)
	{
		m--;
		n--;
		if (m >= 0)
			f = n1[m] - '0';
		else
			f = 0;
		if (n >= 0)
			s = n2[n] - '0';
		else
			s = 0;
		r[k] = (f + s + d) % 10 + '0';
		d = (f + s + d) / 10;
	}
	if (d == 1)
	{
		r[l + 1] = '\0';
		if (l + 2 > size_r)
			return (0);
		while (l-- >= 0)
			r[l + 1] = r[l];
		r[0] = d + '0';
	}
	return (r);
}
