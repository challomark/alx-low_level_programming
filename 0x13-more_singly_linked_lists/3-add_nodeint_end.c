#include "lists.h"

/**
 * add_nodeint_end - a function that adds a new node at the end of a
 * listint_t
 * @head: the pointer to the head of the node
 * @n: the datatype integer for the struct
 *
 * Return: the address of the new element or NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *n_node; /* new node */
	listint_t *temp_node = *head;

	n_node = malloc(sizeof(listint_t));

	if (n_node != NULL)
	{
		n_node->n = n;
		n_node->next = NULL;
	} else
		return (NULL);
	if (temp_node != NULL)
	{
		while (temp_node->next != NULL)
			temp_node = temp_node->next;

		temp_node->next = n_node;
	} else
		*head = n_node;

	return (n_node);
}
