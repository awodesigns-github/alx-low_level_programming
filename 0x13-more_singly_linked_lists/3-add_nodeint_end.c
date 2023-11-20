#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of the list
 *
 * @head: ptr to ptr to head
 * @n: integer for new node
 *
 * Return: address of new node or null
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *currentNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->n = n;
	newNode->next = NULL;
	currentNode = *head;
	if (currentNode == NULL)
	{
		*head = newNode;
	} else
	{
		while (currentNode->next != NULL)
			currentNode = currentNode->next;
		currentNode->next = newNode;
	}
	return (*head);
}
