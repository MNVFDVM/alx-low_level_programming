#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *b = needle;


		while (*l == *b && *b != '\0')
		{
			l++;
			b++;
		}


		if (*b == '\0')
			return (haystack);
	}


	return (0);
}
