#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: unsigned int b
 *
 * Return: ptr to the allocated memory or 98 on fail
 */
void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(b);

	if (ptr == NULL)
	{
		free(ptr);
		exit(98);
	}
	return (ptr);
}
