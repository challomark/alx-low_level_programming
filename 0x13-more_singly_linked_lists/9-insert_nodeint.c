#include "lists.h"

/**
 * insert-nodeint_at_index - a function that inserts a new node at a given
 * position
 * @head: the pointer to the head of the node
 * @idx: the datatype of unsigned int index to add
 * @n: the contents of the new node
 *
 * Return: the address of the new node or NULL if it fails
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *n_node = NULL; /* new node */
	listint_t *p_node = NULL; /* previous node */
	unsigned int node = 0;

	n_node = malloc(sizeof(listint_t));
	if (n_node == NULL || idx > listint_len(*head))
	{
		free(n_node);
		return (NULL);
	}

	n_node->n = n;
	n_node->next = NULL;

	while (head != NULL)
	{
		if (node == idx)
		{
			if (node == 0)
			{
				n_node->next = *head;
				*head = n_node;

				return (n_node);
			}
			n_node->next = p_node->next;
			p_node->next = n_node;
			return (n_node);
		}
		else if ((node + 1) == idx)
			p_node = *head;
		head = &((*head)->next);
		node++;
		}
		return (NULL);
}

/**
 * listint_len - a function that counts the number of nodes in
 * a linked list
 * @h: the pointer to the head of the node
 *
 * Return: the number of element nodes
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *c = h; /* cursor */
	size_t counter = 0;

	while (c != NULL)
	{
		counter += 1;
		c = c->next;
	}
	return (counter);
}
