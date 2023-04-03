#include "lists.h"

/**
 * print_listint - a function that prints all the elements of a listint_t list
 * @h: the datatype pointer of the struct
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	unsigned int nodes = 0;
	const listint_t *new_node = h;

	for (; new_node; new_node = new_node->next)
	{
		printf("%d\n", new_node->n);
		nodes++;
	}

	return (nodes);
}
