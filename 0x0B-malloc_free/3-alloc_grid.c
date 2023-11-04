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
		return (NULL);
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
		ptr = malloc(width * sizeof(int));
		ptr[j] = 0;
		j++;
		}
	i++;
	}
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
