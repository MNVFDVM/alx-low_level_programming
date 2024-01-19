#include "main.h"
/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int m = 0;
	int k;


	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
			{
				m++;
				break;
			}
			else if (accept[k + 1] == '\0')
				return (m);
		}
		s++;
	}
	return (m);
}
