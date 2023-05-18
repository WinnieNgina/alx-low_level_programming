#include "lists.h"
#include <stdio.h>
/**
 * dlistint_len - returns the length of a linked list
 * @h: head pointer to the doubly linked list
 * Return: list length
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num_nodes = 0;

	while (h)
	{
		num_nodes++;
		h = h->next;
	}
	return (num_nodes);
}
