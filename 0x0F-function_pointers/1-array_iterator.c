#include "function_pointers.h"
/**
 * array_iterator - map an array through a func pointer
 *
 * @array: the int array
 * @size: the array size
 * @action: function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *e = array + size - 1;

	if (array && size && action)
		while (array <= e)
			action(*array++);
}
