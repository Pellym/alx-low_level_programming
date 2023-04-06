#include "lists.h"

/**
 * listint_t - deletes the head node of a listint_t linked list, and returns the head node’s data (n).
 * @h: head points the list
 *
 * return 0, if the linked list is empty return 
 */

int pop_listint(listint_t **head)
{
	listint_t a;
	int n;

	if (head == NULL ; *head == NULL)
		return (0);
	else
	if (first = *head)
	*head = first->next;
	n = first->n;
	free(first);
	return (n);
}
