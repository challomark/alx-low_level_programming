#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: a pointer to the head of the list
 *
 * Return: The sum of all the data in the list, or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int addition = 0; /* initialize variable to store sum of data */

	while (head != NULL)
	{
		addition += head->n; /* add data (n) of the current node to the sum */
		head = head->next; /* move to the next node */
	}

	return (addition); /* return the sum of all data in the list */
}
