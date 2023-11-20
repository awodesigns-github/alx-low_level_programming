#include "lists.h"

/**
 * free_listint - frees the list
 *
 * @head: ptr to head
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *currentNode;

	while ((currentNode = head) != NULL)
	{
		head = head->next;
		free(currentNode);
	}
}
