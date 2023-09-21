#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: the pointer to the head of the list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t total_nodes = 0; /* Initializing the total node count */

	while (h != NULL) /* looping through the list */
	{
		if (h->str == NULL)
			printf("[0] (nil)\n"); /* if str is NULL */
		else
			/* print the length and string */
			printf("[%u] %s\n", h->len, h->str);

		h = h->next; /* move to the next node */
		total_nodes++; /* increment the total node count */
	}

	return (total_nodes); /* return total nodes counted */
}
