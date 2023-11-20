#include "lists.h"

/**
 * listint_len - returns numbers of elements
 *
 * @h: ptr to head of list
 *
 * Return: number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
