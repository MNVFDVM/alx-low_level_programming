#include "main.h"

/**
 * wildcmp - Compare strings
 * @f1: pointer to string params
 * @f2: pointer to string params
 * Return: 0
 */

int wildcmp(char *f1, char *f2)
{
	if (*f1 == '\0')
	{
		if (*f2 != '\0' && *f2 == '*')
			return (wildcmp(f1, f2 + 1));
		return (*f2 == '\0');
	}

	if (*f2 == '*')
		return (wildcmp(f1 + 1, f2) || wildcmp(f1, f2 + 1));
	else if (*f1 == *f2)
		return (wildcmp(f1 + 1, f2 + 1));
	return (0);
}
