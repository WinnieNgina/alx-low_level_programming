#include <stdlib.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: a double pointer to the linked list head node
 * @idx: index position where we insert the new node
 * @n: data for the inserted node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *new_node;
	dlistint_t *tmp_head;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	tmp_head = *h;
	for (i = 0; i < idx - 1 && tmp_head != NULL; i++)
		tmp_head = tmp_head->next;

	if (tmp_head == NULL)
		return (NULL);

	if (tmp_head->next == NULL)
		return (add_dnodeint_end(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = tmp_head->next;
	new_node->prev = tmp_head;
	tmp_head->next->prev = new_node;
	tmp_head->next = new_node;

	return (new_node);
}

