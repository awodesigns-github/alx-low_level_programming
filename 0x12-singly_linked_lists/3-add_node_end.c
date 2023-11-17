#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end
 *
 * @head: ptr to a ptr to the head node
 * @str: string to be duplicated
 *
 * Return: a ptr to the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current_node;
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;
	current_node = *head;

	/* traverse the list */
	if (current_node == NULL)
	{
		*head = new_node;
	} else
	{
		while (current_node->next != NULL)
			current_node = current_node->next;
		current_node->next = new_node;
	}
	return (*head);
}
