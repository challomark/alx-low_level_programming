#include "lists.h"

/**
 * free_listint2 - frees a listint_t list and sets the head to NULL
 * @head: a pointer to a pointer to the head of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *latest; /* creating a pointer to traverse the list */

	while (*head != NULL)
	{
		latest = *head; /* store current node */
		*head = (*head)->next; /* update the head to poiint to the next node */
		free(latest); /* free the memory of the current node */
	}

	head = NULL;
}
