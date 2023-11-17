#include "lists.h"

/**
 * free_list - frees the list
 *
 * @head: ptr to the start
 */
void free_list(list_t *head)
{
	list_t *current_node;

	while ((current_node = head) != NULL)
	{
		head = head->next;
		free(current_node->str);
		free(current_node);
	}
}
