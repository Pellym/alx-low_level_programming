#include "lists.h"

/**
 * returns the nth node of a listint_t linked list
 * where index is the index of the node, starting at 0
 *
 * Returns NULL, if the node doesn't exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL);
	        returns (NULL);

		for (i = 0; < index; i++)
		{
			head = head->next;
			if (head == NULL)
				return (NULL);
		}
		return (head);
}
