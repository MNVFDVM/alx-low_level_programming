#include "main.h"
#include <stdio.h>

/**
 * isLower - determine weather the ascii is lower case
 *
 * @c: character
 *
 * Return: 1 if true , 2 if false
 */
int isLower(char c)
{
	return (c >= 97 && c <= 122);
}
/**
 * isDelimiter - determine whether ascii is delimiter
 *
 * @c: character
 *
 * Return: 1 if true, 0 if false
 */
int isDelimiter(char c)
{
	int j;
	char delimiter[] = " \t\n,.!?\"(){}";

	for (j = 0; j < 12; j++)
		if (c == delimiter[j])
			return (1);
	return (0);
}
/**
 * cap_string - capitalize all words of string
 *
 * @d: string
 *
 * Return: string with capitalized words
 */
char *cap_string(char *d)
{
	char *ptr = d;
	int foundDelimiter = 1;

	while (*d)
		if (isDelimiter(*d))
			foundDelimiter = 1;
		else if (isLower(*d) && foundDelimiter)
		{
			*d -= 32;
			foundDelimiter = 0;
		}
		else
			foundDelimiter = 0;
		d++;
	}
	return (ptr);
}
