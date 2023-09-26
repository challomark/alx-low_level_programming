#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: a pointer to the head of the list
 * @index: the index of the node to retrieve starting at 0
 *
 * Return: a pointer to the nth node, or NULL if the node doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0; /* initialize variable to keeptrack of current index */

	while (head != NULL)
	{
		if (a == index) /* check if current index matches target index */
			return (head); /* return pointer to current node */

		head = head->next; /* move to the next node */
		a++; /* increment current index */
	}

	return (NULL); /* return NULL if the node at given index doesn't exist */
}
