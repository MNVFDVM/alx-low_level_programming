#include "main.h"
/**
 * print_to_98 - print n to 98 count
 *
 * @n: input
 */
void print_to_98(int n)
{
	int count;

	if (n > 98)
		for (i = n; i > 98; i--)
			printf("%d, ", count);
	else
		for (i = n; i < 98; i++)
			printf("%d, ", count);
	printf("98\n");
}
