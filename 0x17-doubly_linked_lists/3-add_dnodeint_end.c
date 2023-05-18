#include <stdlib.h>
#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: head pointer of the doubly linked list.
 * @n: data for the added node
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *tmp_head;

	new_node = malloc(sizeof(dlistint_t));
	/*Allocate memory for the new node*/
	if (new_node == NULL)
	{
		return (NULL);
		/*Memory allocation failed*/
	}
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	/*check if the list is empty*/
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	/*transverse the list to the last node*/
	tmp_head = *head;
	while (tmp_head->next != NULL)
	{
		tmp_head = tmp_head->next;
		/*reset the value of the head to the next node in the iteration*/
	}
	tmp_head->next = new_node;
	/*change the existing head->next node to take the address of new_node*/
	new_node->prev = tmp_head;
	/*new_node->prev to take the address of the node previous last node*/
	return (new_node);
}
