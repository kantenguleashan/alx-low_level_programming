#include "lists.h"

/**
 * sum_dlistint - function that returns the sum 
 * @head: pointer to pointer to head of linked list.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
