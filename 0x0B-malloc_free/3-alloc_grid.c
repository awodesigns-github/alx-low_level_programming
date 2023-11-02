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
	int size, **ptr;

	if (width <= 0 || height <= 0)
		return (NULL);
	size = width * height;
	ptr = calloc(size, sizeof(int));
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
