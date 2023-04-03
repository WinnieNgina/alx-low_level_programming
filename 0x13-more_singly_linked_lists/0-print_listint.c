#include <stdio.h>
#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list.
 *@h: pointer to a constant listint_t.
 * Return: The number of nodes in h.
 */
size_t print_listint(const listint_t *h)
{
	size_t num_nodes = 0;

	while (h)
	{
		printf("%d\n",  h->n);
		num_nodes++;
		h = h->next;
	}
	return (num_nodes);
}
