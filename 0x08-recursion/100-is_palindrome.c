#include "main.h"

/**
 * last_index - return the last index of string
 *
 * @c: pointer to string
 *
 * Return: int
 */

int is_palindrome(char *c);
int check(char *c, int start, int end, int m);
int last_index(char *c)
{
	int n = 0;

	if (*c > '\0')
		n += last_index(c + 1) + 1;
	return (n);
}

/**
 * is_palindrome - check if string is palindrome
 *
 * @c: string to check
 *
 * Return: 0 or 1;
 */

int is_palindrome(char *c)
{
	int end = last_index(c);

	return (check(c, 0, end - 1, end % 2));
}

/**
 * check - checker for the palindrome
 *
 * @c: string
 * @start: int moves from right to left
 * @end: int moves from left to right
 * @m: int
 *
 * Return: 0 or 1
 */

int check(char *c, int start, int end, int m)
{
	if ((start == end && m != 0) || (start == end + 1 && m == 0))
		return (1);
	else if (c[start] != c[end])
		return (0);
	else
		return (check(c, start + 1, end - 1, m));
}
