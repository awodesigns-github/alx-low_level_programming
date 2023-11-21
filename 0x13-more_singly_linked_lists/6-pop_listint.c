#include "lists.h"

/**
 * pop_listint - deletes the head node of the list
 *
 * @head: ptr to ptr to head
 *
 * Return: head node data
 */
int pop_listint(listint_t **head)
{
	listint_t *currentNode = NULL;
	int data = 0;

	if (*head == NULL)
		return (0);
	data = (*head)->n;
	currentNode = *head;
	*head = (*head)->next;
	free(currentNode);
	return (data);
}
