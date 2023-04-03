#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 -  frees a listint_t list.
 * @head: A pointer to the listt.
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;
	/*iterates through the list using a tmp pointer*/

	if (head == NULL)
	/*if the head is pointing to null the function return*/
	{
		return;
	}
	while (*head != NULL)
	{
		tmp = *head;
		/*sets the tmp pointer to the current node*/
		*head = (*head)->next;
		/*updates the head pointer to point to the next node*/
		free(tmp);
		/*frees the temp pointer.*/
	}
	*head = NULL;
	/*sets the head pointer to NULL to indicate list is now empty*/
}
