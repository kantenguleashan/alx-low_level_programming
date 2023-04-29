#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: pointer to a pointer to the head of the list.
 * @n: value to be assigned to the new node.
 *
 * Return: the address of the new node, or NULL if it failed.
 */

listint_t *add_nodeint(listint_t **head, int n)
{
	listint_t *new_node;

	if (head == NULL)
	return (NULL);

	/* allocate memory for the new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	return (NULL);

	/* initialize the new node */
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}

