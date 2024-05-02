#include <stdio.h>
/**
 * my_puts - function to print
 *
 * *str: the string to print
 *
 * Return: void
 */

void my_puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}

/**
 * main - entry point
 *
 * Return: 1
 */

int main(void)
{
	char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	my_puts(message);
	return (1);
}

