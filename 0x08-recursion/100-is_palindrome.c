#include "main.h"

int check_pal(char *s, int j, int l);
int _strlen_recursion(char *s);

/**
 * is_palindrome - checks if a string is a palindrome
 * @c: string to reverse
 *
 * Return: 1 if it is, 0 it's not
 */
int is_palindrome(char *c)
{
	if (*c == 0)
		return (1);
	return (check_pal(c, 0, _strlen_recursion(c)));
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to calculate the length of
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - checks the characters recursively for palindrome
 * @s: string to check
 * @j: iterator
 * @l: length of the string
 *
 * Return: 1 if palindrome, 0 if no
 */
int check_pal(char *s, int j, int l)
{
	if (*(s + j) != *(s + l - 1))
		return (0);
	if (j >= l)
		return (1);
	return (check_pal(s, j + 1, l - 1));
}
