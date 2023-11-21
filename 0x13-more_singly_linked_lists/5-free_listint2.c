#include "lists.h"

/**
 * free_listint2 - frees the list
 *
 * @head: ptr to ptr to head
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *currentNode;

	while ((*head)->next != NULL)
	{
		currentNode = (*head)->next;
		free(*head);
		*head = currentNode;
	}

	/* free the last node */
	free(*head);
	*head = NULL;
}
