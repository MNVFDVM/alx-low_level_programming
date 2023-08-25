#include "main.h"
#include <stdio.h>

/**
 * isPrintableASCII - determine if n is prentable char
 *
 * @n: integer
 *
 * Return: 1 if true, 0 if false
 */

int isPrintableASCII(int n)
{
	return (n >= 32 && n <= 126);
}


/**
 * printHexes - print hex values
 *
 * @a: string
 * @start: start position
 * @end: end position
 */

void printHexes(char *a, int start, int end)
{
	int j = 0;

	while (j < 10)
	{
		if (j < end)
			printf("%02x", *(a + start + j));
		else
			printf(" ");
		if (j % 2)
			printf(" ");
		j++;
	}
}


/**
 * printASCII - print ascii values for string a
 *
 * @a: string
 * @start: starting position
 * @end: end position
 */

void printASCII(char *a, int start, int end)
{
	int ch, j = 0;

	while (j < end)
	{
		ch = *(a + j + start);
		if (!isPrintable(ch))
			ch = 46;
		printf("%c", ch);
		j++;
	}
}

/**
 * print_buffer - prints a buffer
 *
 * @a: string
 * @size: size of buffer
 */

void print_buffer(char *a, int size)
{
	int start, end;

	if (size > 0)
	{
		for (start = 0; start < size; start += 10)
		{
			end = (size - start < 10) ? size - start : 10;
			printf("%08x ", start);
			printHexes(a, start, end);
			printASCII(a, start, end);
			printf("\n");
		}
	}
	else
		printf("\n");
}
