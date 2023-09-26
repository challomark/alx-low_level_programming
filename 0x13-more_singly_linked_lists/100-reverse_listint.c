#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: a pointer to a pointer to the head of the list
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL; /* initialize pointer to previous node */
	listint_t *latest = *head; /* initialize pointer to the current node */
	listint_t *n_node; /* declare pointer to next node */

	while (latest != NULL)
	{
		n_node = latest->next; /* store next node temporarily */
		/* reverse the next pointer of the current node */
		latest->next = previous;
		previous = latest; /* move the previous pointer to the current node */
		latest = n_node; /* move the current pointer to the next node */
	}

	*head = previous; /* update the head to point to the new first node */

	return (*head); /* return pointer to the first node of the reversed list */
}
