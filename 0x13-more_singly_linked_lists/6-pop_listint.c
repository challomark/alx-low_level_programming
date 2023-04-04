#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of a listint_t
 * linked list
 * @head: the pointer to the head of the node
 *
 * Return: the head node's data (n) and 0 if empty
 */

int pop_listint(listint_t **head)
{
	int node_data = 0;
	listint_t *temp_node;

	if (*head)
	{
		temp_node = (*head)->next;
		node_data = (*head)->n;
		free(*head);
	}

	*head = temp_node;

	return (node_data);
}
