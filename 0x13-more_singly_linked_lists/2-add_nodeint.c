#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: double pointer to the head of the listint_t list.
 * @n: value to be assigned to the n field of the new node.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (head == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(listint_t));
	/*allocate memory for the new node*/
	if (new_node == NULL)
	/*check if memory was allocated successfully*/
	{
		return (NULL);
	}
	new_node->n = n;
	/*Assign the integer value to the new node*/
	new_node->next = *head;
	/*assign the memory address of the new second element to new node*/
	*head = new_node;
	/*Assign the head address of the new_node*/

	return (new_node);
}
