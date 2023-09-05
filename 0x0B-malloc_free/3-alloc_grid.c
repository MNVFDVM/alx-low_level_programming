#include "main.h"
/**
 * **alloc_grid - return a ponter to a two dimentional array of integers
 *
 * @width: int
 * @height: int
 *
 * Return: 2d array
 */
int **alloc_grid(int width, int height)
{
	int **t, x, y;

	t = malloc(sizeof(*t) * height);

	if (width <= 0 || height <= 0 || t == 0)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		t[x] = malloc(sizeof(**t) * width);
		if (t[x] == 0)
		{
			while (x--)
				free(t[x]);
			free(t);
			return (NULL);
		}
		for (y = 0; y < width; y++)
			t[x][y] = 0;
	}
	return (t);
}
