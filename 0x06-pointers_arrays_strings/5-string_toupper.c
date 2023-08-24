#include "main.h"
/**
 * *string_toupper - change the letters of string from lower to upper case
 *
 * @string: string
 *
 * Return: string
 */
char *string_toupper(char *string)
{
	int i;

	for (i = 0; string[i] != '\0'; i++)
	{
		if (string[i] >= 97 && string[i] <= 122)
		{
			string[i] = string[i] - 32;
		}
	}
	return (string);
}
