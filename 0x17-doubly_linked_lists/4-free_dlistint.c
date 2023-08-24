#include "lists.h"
/**
 * FREE_DLISTINt - FREES A DLISTINT_T LIST.
 * @head: A POINTER TO THE HEAD
 *
 *
 */

void free_dlistint(dlistint_t *head)
{

	while (head != NULL)
	{
		dlistint_t *next = head->next;

		free(head);
		head = next;
	}
}
