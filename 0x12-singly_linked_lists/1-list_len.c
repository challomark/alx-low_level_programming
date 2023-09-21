#include "lists.h"

/**
 * list_len - returns thenumber of elements in a list_t list
 * @h: the pointer to the head of the list
 *
 * Return: the number of elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t total_nodes = 0; /* Initializing the total node count */

	while (h != NULL) /* looping through list */
	{
		h = h->next; /* move to the next node */
		total_nodes++; /* increment the total nodes count */
	}

	return (total_nodes); /* return total nodes counted */
}
