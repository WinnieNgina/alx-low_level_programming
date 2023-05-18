#include "lists.h"
#include <stdlib.h>
/**
 * delete_dnodeint_at_index - deletes an node at position index
 * @head: a double pointer to the head node of linked list
 * @index: postion of the node deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *tmp_head;
	dlistint_t *prev_node = NULL;

	if (head == NULL || *head == NULL)
		return (-1);
	tmp_head = *head;
	if (index == 0)
	{
		if ((*head)->next != NULL)
		{
			(*head)->next->prev = NULL;
			*head = (*head)->next;
		}
		else
		{
			*head = NULL;
			/*Set *head to NULL for an empty list*/
		}
		free(tmp_head);
		return (1);
	}
	for (i = 0; i < index && tmp_head != NULL; i++)
	{
		prev_node = tmp_head;
		tmp_head = tmp_head->next;
	}
	if (tmp_head == NULL)
		/*You got to the end of list without getting to idx*/
		/*idx is out of bound*/
		return (-1);
	if (tmp_head->next == NULL)
	/*deleting from end*/
		prev_node->next = NULL;
	else
	{
		prev_node->next = tmp_head->next;
		tmp_head->next->prev = prev_node;
	}
	free(tmp_head);
	return (1);
}
