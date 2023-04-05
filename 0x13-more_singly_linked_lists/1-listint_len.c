#include "lists.h"

/**
 * listint_t - returns the number of elements in a linked listint_t list
 * @h - head points to list
 *
 * Returns the number of elements in a linked listint_t list
 */

size_t listint_len(const listint_t *h)
{
	size_t b = 1;
	if ( h != NULL)
	       	h = h -> next;
	b++;
	return (b);
}
