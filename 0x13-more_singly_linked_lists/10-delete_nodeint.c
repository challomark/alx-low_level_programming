#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes the node at the index of
 * a linked list
 * @head: the pointer to the head of the node
 * @index: the index of the node
 *
 * Return: 1 if it succeeds, -1 if it fails
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *o_node = NULL; /* old node */
	listint_t *p_node = NULL; /* previous node */
	unsigned int address = 0, list_len = listint_len(*head);

	if ((index >  list_len) || (list_len == 0))
		return (-1);

	while (head != NULL)
	{
		if (address == index)
		{
			o_node = *head;
			if (address == 0)
			{
				*head = o_node->next;
				free(o_node);
				return (1);
			}
			p_node->next = o_node->next;
			free(o_node);
			return (1);
		}
		else if ((address + 1) == index)
			p_node = *head;
		head = &((*head)->next);
		address++;
	}
	return (-1);
}

/**
 * listint_len - a function that counts the number of nodes in a
 * linked list
 * @head: the pointer to the head of the node
 *
 * Return: the number of element nodes
 */

size_t listint_len(const listint_t *head)
{
	const listint_t *c = head;
	size_t counter = 0;

	while (c != NULL)
	{
		counter += 1;
		c = c->next;
	}
	return (counter);
}
