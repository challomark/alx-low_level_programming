#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: a pointer to the head of the list
 *
 * Return: the number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t elements = 0; /* initialize the elements count */

	while (h != NULL) /* looping through list */
	{
		elements++; /* increment the element count */
		h = h->next; /* move to the next node */
	}

	return (elements); /* return number of elements in the list */
}
