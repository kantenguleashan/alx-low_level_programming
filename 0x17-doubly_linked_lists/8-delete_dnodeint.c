#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes the node at INDEX
 * @head: POINTER TO POINTER 
 * @index: INDEX TO BE DELETED 
 *
 * Return:IF SUCCEED
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
        dlistint_t *head1;
        dlistint_t *head2;
        unsigned int counting;

        head1 = *head;

        if (head1 != NULL)
                while (head1->prev != NULL)
                        head1 = head1->prev;
        counting = 0;

        while (head1 != NULL)
        {
                if (counting == index)
                {
                        if (counting == 0)
                        {
                                *head = head1->next;
                                if (*head != NULL)
                                        (*head)->prev = NULL;
                        }
                        else
                        {
                                head2->next = head1->next;

                                if (head1->next != NULL)
                                        head1->next->prev = head2;
                        }
                        free(head1);
                        return (1);
                }
                head2 = head1;
                head1 = head1->next;
                counting++;
        }
        return (-1);
}

