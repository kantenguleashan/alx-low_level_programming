#include "lists.h"

/**
 *  add_dnodeint_end - IT WILL ADD NEW AT THE END .
 * @head: DOUBLE POINTER TO HEAD LIST
 * Return:  the address of the new element, or NULL WHEN FAIL
 * @n: iINTERGER TO ADD TO NEW NODE
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	while ((*head)->next != NULL)
		*head = (*head)->next;

	(*head)->next = new_node;
	new_node->prev = *head;

	return (new_node);
}
