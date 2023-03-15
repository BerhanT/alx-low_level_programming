#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of int
 * @width: width
 * @height: height
 * Return: width and heigh if success NULL for failure
 */

int **alloc_grid(int width, int height)
{
	int **z;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	z = malloc(sizeof(int *) * height);

	if (z == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		z[i] = malloc(sizeof(int) * width);

		if (z[i] == NULL)
		{
			for (; i >= 0; i++)
				free(z[i]);
			free(z);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			z[i][j] = 0;
	}

	return (z);
}
