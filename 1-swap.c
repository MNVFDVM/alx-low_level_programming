#include "main.h"

/**
 * swap_int - swap the valuesof teo integers
 *
 * @a: input parameter 1
 * @b: input parameter 2
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
