#include "lists.h"
#include <stddef.h>

/*
 * prints all the elements of a listint_t list.
 *
 * returns the number of elements in a linked listint_t list
 */

 size_t listint_len(const listint_t *h)
 {
                  size_t = 0;

		  while (h != NULL)
    {
        count++;
        h = h->next;
    }

    return count;
}
