#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: A pointer to the listint_t
 * Return: the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int num;
	
	if ((head == NULL) || (*head == NULL))
	{
		return (0);
	}
	else
	{
		tmp = *head;
		*head = (*head)->next;
		num = tmp->n;
		free(tmp);
		return (num);
	}
}
