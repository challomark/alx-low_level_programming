#include "lists.h"

/**
 * reverse_listint - a function that reverses a listint_t linked
 * list
 * @head: the pointer to the head of the node
 *
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *p_node = NULL, *nxt_node; /* the previous and next node */

	if (!*head)
		return (0);
	while ((*head)->next != NULL)
	{
		nxt_node = (*head)->next;
		(*head)->next = p_node;
		p_node = (*head);
		(*head) = nxt_node;
	}

	(*head)->next = p_node;
	return (*head);
}
