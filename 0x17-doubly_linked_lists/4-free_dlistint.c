#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: A pointer to the list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp_head;

	while (head)
	{
		tmp_head = head->next;
		free(head);
		head = tmp_head;
	}
}

