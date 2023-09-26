#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position in a
 * listint_t list
 * @head: a pointer to a pointer to the head of the list
 * @idx: the index where the new node should be inserted, starting at 0
 * @n: the int value to be stored in the new node
 *
 * Return: the address of the new node, or NULL if it fails to add the node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *n_node; /* create a new node */
	listint_t *temporary, *previous = NULL;
	/* create temporary pointers to traverse list */
	unsigned int a = 0; /* initialize variable to keep track of current index */

	n_node = malloc(sizeof(listint_t)); /* allocate mem for the new node */
	if (n_node == NULL) /* check for malloc failure */
		return (NULL);
	n_node->n = n; /* set the value of the new node */
	n_node->next = NULL; /* initialize the next pointer of the new node */

	temporary = *head; /* initializing temporary with the head of the list */

	if (idx == 0) /* if inserting at the beginning */
	{
		n_node->next = *head; /* update the new node's next pointer */
		*head = n_node; /* update the head to point to the new node */
		return (n_node); /* return the address of the new node */
	}

	while (temporary != NULL)
	{
		if (a == idx) /* check if reached desired index */
		{
			/* update the previous node's next pointer to point to the new node */
			previous->next = n_node;
			/* update new node's next pointer to point to the next node */
			n_node->next = temporary;
			return (n_node); /* return the address of the new node */
		}

		previous = temporary; /* store current node as previous node */
		temporary = temporary->next; /* move to the next node */
		a++; /* increment the current index */
	}

	free(n_node); /* free the new node if the desired index is not found */
	return (NULL); /* return NULL if the desired index is not found */
}
