#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of the list
 *
 * @head: ptr to ptr to head
 * @n: integer for new node
 *
 * Return: address of the new element or null
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = *head;
	*head = newNode;
	return (*head);
}
