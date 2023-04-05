#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Adds a new node at the end of a linked list.
 * @head: Pointer to the head of the linked list.
 * @n: Data to store in the new node.
 *
 * Return: Pointer to the new node or NULL if it fails.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *new = malloc(sizeof(listint_t));

    if (!new)
        return (NULL);

    new->n = n;
    new->next = NULL;

    if (*head == NULL)
        *head = new;
    else
    {
        listint_t *last = *head;
        while (last->next != NULL)
            last = last->next;
     
