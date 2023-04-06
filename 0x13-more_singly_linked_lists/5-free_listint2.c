#include "lists.h"

/**
 * listint_t - rees a listint_t list
 * The function sets the head to NULL
 * @h: head points the linked list
 */

void free_listint2(listint_t **head)
{
	listint_t *new;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		new = (*head)->new;
		free(*head);
		*head = new;
	}
