#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: a pointer to a pointer to the head of the list
 * @n: the int value to be stored in the new node
 *
 * Return: the address of the new element, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *n_node; /* create new node */
	listint_t *temporary = *head; /* create temp pointer to traverse the list */

	n_node = malloc(sizeof(listint_t)); /* allocate memfor the new node */
	if (n_node == NULL) /* check for malloc failure */
		return (NULL);

	n_node->n = n; /* set the value of the new node */
	/* the new node will be the last node, so set its new pointer to NULL*/
	n_node->next = NULL;

	if (*head == NULL) /* if list is empty, make the new node the head */
	{
		*head = n_node;
	}
	else
	{
		while (temporary->next != NULL) /* traverse list to find the last node */
		{
			temporary = temporary->next;
		}
		/* make the last node's next pointer point to the new node */
		temporary->next = n_node;
	}

	return (n_node); /* return address of the new element */
}
