#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: a pointer to a pointer to the head of the list
 *
 * Return: The data (n) from the deleted head node, or  if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temporary; /*creating a temporary pointer to the head node */
	int n; /* variable to store data from the head node */

	if (*head == NULL) /* check if list is empty */
		return (0);

	temporary = *head; /* store the head node in the temporary pointer */
	*head = (*head)->next; /* update the head to point to the next node */
	n = temporary->n; /* store the data from the head node */
	free(temporary); /* free the mem of the original head node */

	return (n); /* return the data from the deleted node */
}
