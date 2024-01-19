#include "main.h"
/**
 * _strncat - concatenate two strings
 *
 * @dest: pointer to destination
 * @src: pointer to source
 * @n: bytes from src
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int j, i;

	j = 0;
	while (dest[j])
		j++;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[j + i] =  src[i];
	dest[j + i] = '\0';
	return (dest);
}

