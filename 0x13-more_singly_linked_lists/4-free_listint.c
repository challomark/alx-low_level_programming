#include "lists.h"

/**
 * free_listint - a function that frees a listint_t list
 * @head: the pointer to the head of the node
 *
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *temp_node;

	while (head != NULL)
	{
		temp_node = head;
		head = head->next;
		free(temp_node);
	}
}
