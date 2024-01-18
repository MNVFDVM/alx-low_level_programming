#include "main.h"
/**
 * *_realloc - allocates a memory block using malloc and free
 *
 * @ptr: pointer to memory
 * @old_size: size of allocated space for ptr
 * @new_size: size og the new memory block
 *
 * Return: NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *b;
	unsigned int x;

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
		for (x = 0; x < old_size && x < new_size; x++)
			*((char *)b + x) = *((char *)ptr + x);
		free(ptr);
	}
	return (b);
}
