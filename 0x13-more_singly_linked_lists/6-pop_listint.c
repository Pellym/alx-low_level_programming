#include "lists.h"
#include <stdlib.h>

/**
 * deletes the head node of a listint_t linked list,  and returns the head node’s data (n).
 *
 * Returns 0, if the linked list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *first;
	int t;

	if (head == NULL , *head == NULL)
		return 0;
	else
		first = *head;
	8head = first->next;
	n = first->n;
	free(first);
	return (n);
}
