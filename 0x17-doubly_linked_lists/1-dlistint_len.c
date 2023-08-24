#include "lists.h"

/**
 * dlistint_len - IT GIVES THE NUMBER OF ELEMENTS IN A LINKED LIST.
 * Return: IT GIVES THE NUMBER OF NODES
 * @h: HEAD OF LIST POINTER
 */

size_t dlistint_len(const dlistint_t *h)
{
	int calculate = 0;

	if (h == NULL)
		return (calculate);

	while (h != NULL)
	{
		calculate++;
		h = h->next;
	}

	return (calculate);
}
