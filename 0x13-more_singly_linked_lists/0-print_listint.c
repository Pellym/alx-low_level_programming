#include "lists.h"
#include <stddef.h>

/**
 * print_listint_t - prints all the elements of a listint_t list.
 * @h: head as pointer in the list
 * @next: points to the next node
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
        size_t a = 0;
        while (h != NULL) /* head != NULL */
        {
		printf("%d\n", h->n);
		h = h->next;
        a++;
        }
        return (a);
}
