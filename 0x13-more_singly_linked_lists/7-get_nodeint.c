#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of the list
 *
 * @head: ptr to the head of the list
 * @index: unsigned integer index
 *
 * Return: pointer to the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (count < index && head != NULL)
	{
		head = head->next;
		count++;
	}
	if (head == NULL)
		return (NULL);
	return (head);
}
