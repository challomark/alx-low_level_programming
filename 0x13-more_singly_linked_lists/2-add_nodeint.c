#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginging of a listint_t list
 * @head: a pointer to a pointer to the head of the list
 * @n: the int value to be stored in the new node
 *
 * Return: the address of the new element, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *n_node; /* create new node */

	n_node = malloc(sizeof(listint_t)); /* allocate mem for new node */
	if (n_node == NULL) /* check for malloc failure */
		return (NULL);

	n_node->n = n; /* set value of the new node */
	n_node->next = *head; /* make the new node point to the current head */

	*head = n_node; /* update the ead to point to the new node */

	return (n_node); /* return address of new element */
}
