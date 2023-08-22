#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * main = entry point
 *
 * description: check if the random number is positve or zero or negative
 *
 * return: 0 success
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);

	return (0);
}
