#include "lists.h"

/**
 *  sum_dlistint - RETURNS THE SUM OF ALL THE DATA
 * RETURN: EMPTY LIST OR O
 * @head: DOUBLE POINTER TO THE HEAD 
 */

int sum_dlistint(dlistint_t *head)
{

	int sum = 0;
	dlistint_t *i;

	for (s = head; s != NULL; s = s->next)
	{
		sum += s->n;
	}

	return (sum);
}

