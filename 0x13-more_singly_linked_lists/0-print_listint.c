#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: a pointer to the head of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t total_nodes = 0; /* initializing the total node count */

	while (h != NULL) /* looping through the list */
	{
		printf("%d\n", h->n); /* print the value of the current node */
		h = h->next; /* move to the next node */
		total_nodes++; /* increment the total node count */
	}

	return (total_nodes); /* return total nodes counted */
}
