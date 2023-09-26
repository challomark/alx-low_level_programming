#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at a given position in a
 * listint_t list
 * @head: a pointer to a pointer to the head of the list
 * @index: the index of the node to be deleted, starting at 0
 *
 * Return: 1 if the deletion succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	/* create temporary pointer to traverse the list */
	listint_t *temporary, *previous = NULL;
	unsigned int a = 0; /* initialize variable to keep track of current index */

	if (head == NULL || *head == NULL) /* check if the list or head is NULL */
		return (-1);

	temporary = *head; /* initialize temp pointer with the head of the list */

	if (index == 0) /* if deleting the first node */
	{
		*head = (*head)->next; /* update the head to point to the next node */
		free(temporary); /* free the mem of the deleted node */
		return (1); /* return 1 indicating success */
	}

	while (temporary != NULL)
	{
		if (a == index) /* check if reached desired index */
		{
			previous->next = temporary->next;
			/* update the previous node's next pointer to skip current node */
			free(temporary); /* free the memory of the deleted node */
			return (1); /* return 1 indicating success */
		}

		previous = temporary; /* store the current node as the previous node */
		temporary = temporary->next; /* move to the next node */
		a++; /* increment the current index */
	}

	return (-1); /* return -1 if deletion failed */
}
