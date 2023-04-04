#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to the list
 * @index: node index helps in iterating through nodes
 * Return: NULL if node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
	/*if head pointer is null we return null since the list is empty.*/
	{
		return (NULL);
	}
	for (i = 0; i > index; i++)
	/*traverse the list using loop and move the head pointer to the nth node*/
	{
		head = head->next;
		if (head == NULL)
		/*Reached the end of the list before reaching the nth node*/
		/*we return null since the node doesn't exist.*/
			return (NULL);
	}
	return (head);
}
