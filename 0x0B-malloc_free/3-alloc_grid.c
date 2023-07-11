#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **alc;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	alc = malloc(sizeof(int *) * height);

	if (alc == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		alc[x] = malloc(sizeof(int) * width);

		if (alc[x] == NULL)
		{
			for (; x >= 0; x--)
				free(alc[x]);

			free(alc);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			alc[x][y] = 0;
	}

	return (alc);
}
