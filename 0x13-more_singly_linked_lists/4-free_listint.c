#include "lists.h"
#include <stdlib.h>

/**
 * frees a listint_t list.
 *
 * Retern: Always 0
 */

void free_listint(listint_t *head)
{
	listint = next;

	while (head != NULL)
	{ 
		next = head ->next;
		free(head);
		head = next;
	}
}
