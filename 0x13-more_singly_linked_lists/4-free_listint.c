#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: a pointer to the head of the list
 */
void free_listint(listint_t *head)
{
	listint_t *latest; /* creating a pointer to traverse the list */

	while (head != NULL)
	{
		latest = head; /* store the current node */
		head = head->next; /* move to the next node */
		free(latest); /* free the memory of the current node */
	}
}
