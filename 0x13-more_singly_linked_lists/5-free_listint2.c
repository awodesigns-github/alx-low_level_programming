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

	while ((currentNode = *head) != NULL)
	{
		head = head->next;
		free(currentNode);
	}
	head = NULL;
}
