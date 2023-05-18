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
		/*store the address for the next node*/
		free(head);
		/*free the head node*/
		head = tmp_head;
		/*set the next node as the head*/
	}
}

