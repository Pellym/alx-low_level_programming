#include "lists.h"

/**
 * listint_t - adds a new node at the end of a listint_t list
 * @h - heads point to the linked list
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	
	listint_t *new, *last;

	        last = *head;
        while (last->next != NULL)
        {
                last = last->next;
        }
        last->next = new;
        return (new);

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	}
