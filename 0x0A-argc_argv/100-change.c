#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the minimum number of coins
 *
 * @argc: number of command line arguments
 * @argv: pointer to array of command line arguments
 *
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int j, l = 0, money = atoi(argv[1]);
		int c[] = {25, 10, 5, 2, 1};
		for (j = 0; j < 5; j++)
		{
			if (money >= c[j])
			{
				l += money / c[j];
				money = money % c[j];
				if (money % c[j] == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", l);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
