#include "lists.h"

/**
 * returns the sum of all the data (n) of a listint_t linked list.
 *
 * Returns 0, if it's empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != N)
	{
	sum += head-> n;
	head=head->next;
	}
	return (sum);
}

