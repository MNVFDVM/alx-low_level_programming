#include "main.h"
/**
 * _isupper - uppercase letters
 * @s: char to check
 *
 * Return: 0 or 1
 */
int _isupper(int s)
{
	if (s >= 'A' && s <= 'Z')
		return (1);
	else
		return (0);
}
