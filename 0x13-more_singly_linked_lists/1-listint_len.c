#include <stdio.h>
#include "lists.h"
/**
 * listint_len - returns the count of n values in the list(nodes)
 *@h: pointer to a constant listint_t.
 * Return: The number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t num_nodes = 0;

	while (h)
	{
		num_nodes++;
		h = h->next;
	}
	return (num_nodes);
}
