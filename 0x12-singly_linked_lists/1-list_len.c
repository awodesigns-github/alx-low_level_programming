#include "lists.h"

/**
 * list_len - returns the number of elements in the list
 *
 * @h: the pointer to the first node/element
 *
 * Return: unsigned integer
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
