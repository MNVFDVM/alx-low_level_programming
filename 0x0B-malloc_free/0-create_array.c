#include "main.h"
/**
 * *create_array - creates an array of char
 *
 * @size: size of the array
 * @c: char to initialize
 *
 * Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *m = malloc(size);

	if (size == 0 || m == 0)
		return (0);
	while (size--)
		m[size] = c;
	return (m);
}
