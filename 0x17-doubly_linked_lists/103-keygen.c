#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * f4 - finds the biggest number
 *
 * @usrn: username
 * @len: length of username
 * Return: the biggest number
 */

int f4(char *usrn, int len)
{
	int c;
	int v;
	unsigned int rand_num;

	c = *usrn;
	v = 0;

	while (v < len)
	{
		if (c < usrn[v])
			c = usrn[v];
		v += 1;
	}

	srand(c ^ 14);
	rand_num = rand();

	return (rand_num & 63);
}

/**
 * f5 - multiplies each char of username
 *
 * @usrn: username
 * @len: length of username
 * Return: multiplied char
 */

int f5(char *usrn, int len)
{
	int c;
	int v;

	c = v = 0;

	while (v < len)
	{
		c = c + usrn[v] * usrn[v];
		v += 1;
	}

	return (((unsigned int)c ^ 239) & 63);
}

/**
 * f6 - generates a random char
 *
 * @usrn: username
 * Return: a random char
 */

int f6(char *usrn)
{
	int c;
	int v;

	c = v = 0;

	while (v < *usrn)
	{
		c = rand();
		v += 1;
	}

	return (((unsigned int)c ^ 229) & 63);
}

/**
 * main - Entry point
 *
 * @argc: arguments count
 * @argv: arguments vector
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	char keygen[7];
	int l, c, v;
	long alph[] = {
		0x3877445248432d41, 0x42394530534e6c37, 0x4d6e706762695432,
		0x74767a5835737956, 0x2b554c59634a474f, 0x71786636576a6d34,
		0x723161513346655a, 0x6b756f494b646850 };
	(void) argc;

	for (l = 0; argv[1][l]; l++)
		;

	keygen[0] = ((char *)alph)[(l ^ 59) & 63];

	c = v = 0;
	while (v < l)
	{
		c = c + argv[1][v];
		v = v + 1;
	}
	keygen[1] = ((char *)alph)[(c ^ 79) & 63];

	c = 1;
	v = 0;
	while (v < l)
	{
		c = argv[1][v] * c;
		v = v + 1;
	}
	keygen[2] = ((char *)alph)[(c ^ 85) & 63];

	keygen[3] = ((char *)alph)[f4(argv[1], l)];

	keygen[4] = ((char *)alph)[f5(argv[1], l)];

	keygen[5] = ((char *)alph)[f6(argv[1])];
	keygen[6] = '\0';
	for (c = 0; keygen[c]; c++)
		printf("%c", keygen[c]);
	return (0);
}
