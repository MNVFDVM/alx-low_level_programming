#include "main.h"

/**
 * move_past_star - iterates past asterisk
 *
 * @c2: the second string
 *
 * Return: the pointer past star
 */

char *move_past_star(char *c2)
{
	if (*c2 == '*')
		return (move_past_star(c2 + 1));
	else
		return (c2);
}

/**
 * inception - make magic reality
 *
 * @c1: the first string
 * @c2: the second string
 *
 * Return: 1 if identical, 0 if false
 */
int inception(char *c1, char *c2)
{
	int r = 0;

	if (*c1 == 0)
		return (0);
	if (*c1 == *c2)
		r += wildcmp(c1 + 1, c2 + 1);
	r += inception(c1 + 1, c2);
	return (r);
}

/**
 * wildcmp - compare two strings
 *
 * @c1: first string
 * @c2: second string
 *
 * Return: 1 if identical, 0 if false
 */

int wildcmp(char *c1, char *c2)
{
	int r = 0;

	if (!c1 && c2 == '*' && !*move_past_star(c2))
		return (1);
	if (*c1 == *c2)
	{
		if (!*c1)
			return (1);
		return (wildcmp(c1 + 1, *c2 == '*' ? c2 : c2 + 1));
	}
	if (!*c1 || !c2)
		return (0);
	if (*c2 == '*')
	{
		c2 = move_past_star(c2);
		if (!*c2)
			return (1);
		if (*c1 == *c2)
			r += wildcmp(c1 + 1, c2 + 1);
		r += inception(c1, c2);
		return (!!r);
	}
	return (0);
}
