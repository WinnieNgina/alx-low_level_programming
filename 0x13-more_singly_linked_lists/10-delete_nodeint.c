#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given position.
 * @head: pointer to the head of the list.
 * @index: Index of the node that should be deleted. Index starts at 0.
 *
 * Return: 1 on success, -1 on failure.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *node, *orig_node;

	if (head == NULL || *head == NULL)
		return (-1);
	node = *head;
	if (index == 0)
	{
		*head = node->next;
		free(node);
		return (1);
	}
	orig_node = node;
	node = node->next;
	for (i = 1; i < index; i++)
	{
		if (node == NULL)
			return (-1);
		orig_node = node;
		node = node->next;
	}
	orig_node->next = node->next;
	free(node);
	return (1);
}
