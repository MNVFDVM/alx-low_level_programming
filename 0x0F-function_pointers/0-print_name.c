#include "function_pointers.h"
/**
 * print_name - print name
 *
 * @name: the string name
 * @f: the printing function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
