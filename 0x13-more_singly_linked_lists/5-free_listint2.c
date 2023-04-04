#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list
 * @head: the pointer to the head of the node
 *
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *nodes;
	listint_t **temp_node = head;

	if (temp_node != NULL)
	{
		while (*head != NULL)
		{
			nodes = *head;
			free(nodes);

			*head = (*head)->next;
		}

		*temp_node = NULL;
	}
}
