#include "main.h"
/**
 * numLength - compute the length of string
 *
 * description: compute the length of string
 *
 * @num: operand number
 *
 * Return: number of digits
 */
int numlength(int num)
{
	int length = 0;

	if (!num)
		return (1);
	while (num)
	{
		num = num / 10;
		length += 1;
	}
	return (length);
}
/**
 * main - entry point
 *
 * description: print the first 98 fibonacci numbers starting with 1 and 2
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int i, initial;
	unsigned long f1 = 1, f2 = 2, sum, max = 100000000,
		      f1x = 0, f2x = 0, sumx = 0;

	for (i = 1; i <= 98; i++)
	{
		if (f1x > 0)
			printf("%lu", f1x);
		initial = numLength(max) - 1 - numLength(f1);
		while (f1x > 0 && initial > 0)
		{
			printf("%d", 0);
			initial--;
		}
		printf("%lu", f1);
		sum = (f1 + f2) % max;
		sumx = f1x + f2x + (f1 + f2) / max;
		f1 = f2;
		f1x = f2x;
		f2 = sum;
		f2x = sumx;
		if (i != 98)
			printf(", ");
		else
			printf("\n");
	}
	return (0);
}


