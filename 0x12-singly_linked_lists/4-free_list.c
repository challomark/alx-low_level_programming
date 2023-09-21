#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: the pointer to the head of the list
 */
void free_list(list_t *head)
{
	/* the pointer to keep track of the latest node being freed */
	list_t *latest;
	/* iterate through the list until the end is reached */
	while (head != NULL)
	{
		latest = head; /* store the latest node */
		head = head->next; /* move pointer to the next node */

		/* free the memory allocated for the string in the node */
		free(latest->str);
		/* free the memory allocated for the latest node itself */
		free(latest);
	}
}
