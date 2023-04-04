#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given position.
 * @head: pointer to the head of the list.
 * @index: Index of the node that should be deleted. Index starts at 0.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *node, *prev_node;

	if (head == NULL || *head == NULL)
		return (-1);
	node = *head;
	if (index == 0)
	{
		*head = node->next;
		free(node);
		return (1);
	}
	prev_node = node;
	node = node->next;
	for (i = 1; i < index; i++)
	{
		if (node == NULL)
			return (-1);
		prev_node = node;
		node = node->next;
	}
	prev_node->next = node->next;
	free(node);
	return (1);
}
