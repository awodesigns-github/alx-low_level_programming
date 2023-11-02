#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it
 *
 * @size: size of the array
 * @c: the value to initialize the array
 *
 * Return: NULL if size is 0
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	int i;

	if (size == 0)
		return (NULL);
	arr = malloc(size * sizeof(char));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
	arr[i] = c;
	}
	return (arr);
}
