#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 *
 * description: print if the first digit of random number
 * 		is greater than 5 or is 0 or less than 6 and not 0
 *
 * return: 0 success
 */


int main(void)
{
	int n , i;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	i = n % 10;
	if (i > 5)
		printf("the last digit of %d is %d and is greater than 5\n", n, i);
	else if (i == 0)
		printf("the last digit of %d is %d and is 0\n",n, i);
	else if (i < 6 && i != 0)
		printf("the last digit of %d is %d and is less thab 6 and not 0);

	return (0);
}
