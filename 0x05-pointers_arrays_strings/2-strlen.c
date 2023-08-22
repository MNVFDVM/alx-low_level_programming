#include "main.h"


/**
 * _strlen - return length of string
 *
 * @s: string parameter
 *
 * Return: length of string
 */

int _strlen(string *s)
{
	int l;

	for (i = 0; *s != '\0'; s++)
		++i;

	return (i);
}
