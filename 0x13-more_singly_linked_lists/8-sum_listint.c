#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all the data (n) of a
 * listint_t linked list
 * @head: the pointer to the head of the node
 *
 * Return: the sum of all the data and 0 if the list is empty
 */

int sum_listint(listint_t *head)
{
	int sum_data = 0;

	while (head)
	{
		sum_data += head->n;
		head = head->next;
	}

	return (sum_data);
}
