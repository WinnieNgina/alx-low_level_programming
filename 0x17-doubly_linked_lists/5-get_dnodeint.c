#include "lists.h"
/**
 * get_dnodeint_at_index - returns node at nth index
 * @head: a pointer to the head of the linked list
 * @index: position of the node we are returning
 * Return: the nth node or NULL if it does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL) 
	{
		if (i < index)
		{
			head = head->next;
			i++;
			if (i == index)
				return (head);
		}
	}
	return (NULL);
}
