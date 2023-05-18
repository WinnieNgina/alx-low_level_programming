#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint - adds a  new node at the beginning of a dlistint_t list.
 * @head: double pointer to the head node of the linked list
 * @n: value of the node added
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
		/*Failed to allocate memory for new node*/
	}
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}
	*head = new_node;
	/*Update the head pointer*/
	return (new_node);
}
