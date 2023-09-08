#include "main.h"
/**
 * *_realloc - allocate memory block using malloc and free
 *
 * @ptr: pointer to memory
 * @old_size: size in bytes of the allocated space for ptr
 * @new_size: size in bytes of new memory block
 *
 * Return: null
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *b;
	unsigned int j;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		b = malloc(new_size);
		if (b == NULL)
			return (NULL);
		return (b);
	}
	if (new_size > old_size)
	{
		b = malloc(new_size);
		if (b == NULL)
			return (NULL);
		for (j = 0; j < old_size && j < new_size; j++)
			*((char *)b + j) = *((char *)ptr + j);
		free(ptr);
	}
	return (b);
}
