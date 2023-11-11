#include "function_pointers.h"

/**
 * array_iterator - executes a function on each element of an array
 *
 * @size: the size of the array
 * @array: the array to iterate
 * @action: the pointer function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array != NULL && action != NULL)
		for (i = 0; i < size; i++)
		{
		action(*array);
		*array++;
		}
}
