#include "lists.h"

/**
 * add_nodeint - is a function that adds a new node at the beginning of
 * a listint_t list
 * @head: the pointer to the head of node
 * @n: the datatype integer for the struct
 *
 * Return: the address of the new element or NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *n_node; /* new node */

	n_node = malloc(sizeof(listint_t));
	if (n_node == NULL)
		return (NULL);
	n_node->n = n;
	n_node->next = *head;

	*head = n_node;

	return (n_node);
}
