#include "lists.h"
#include <stdlib.h>

/**
 * frees a listint_t list
 * sets the head to NULL
 *
 *Return: void
 /

 void free_listint2(listint_t **head)
 {
         listint_t *next;

	 if (head == NULL)
	          return;
		  while (**head !=NULL)
		  {
		 
		  NEXT = (*head) ->next;
		  free(**head);
		  *head = next;
		  }
		  }
