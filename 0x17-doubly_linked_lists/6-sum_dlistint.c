#include "lists.h"
/**
 * sum_dlistint - sums of all the data (n) of a dlistint_t linked list.
 * @head: a pointer to the head node of the linked list
 * Return:  sum of all the data (n) or 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	int num;

	while (head != NULL)
	{
		num = head->n;
		head = head->next;
		sum += num;
	}
	return (sum);
}
