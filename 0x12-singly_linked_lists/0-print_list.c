#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: A pointer to the head node of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_list(const list_t *h)
{
	const list_t *current = h;
	/*Intializing pointer to nodes at the head node*/
	size_t node_count = 0;
	/*Represents the numner of nodes in the linked list*/
	while (current != NULL)
	{
		if (current->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", current->len, "(nil)");
		}
		node_count++;
		/*Iterates through the nodes to print content of each*/
		current = current->next;
		/*assigns the next pointer of the current linked list node*/
	}
	return (node_count);
}
