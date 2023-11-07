#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array
 *
 * @width: i dimension
 * @height: j dimension
 *
 * Return: return NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int i, j, **ptr;

	if (width <= 0 || height <= 0)
	{
	return (NULL);
	}
	ptr = malloc(sizeof(int *) * height);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < width; i++)
	{
	ptr[i] = malloc(sizeof(int) * width);
		if (ptr[i] == NULL)
		{
			for (j = i - 1; j >= 0; j--)
			{
			free(ptr[j]);
			}
		free(ptr);
		return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < i; j++)
		{
		ptr[i][j] = 0;
		}
	}
	return (ptr);
}
