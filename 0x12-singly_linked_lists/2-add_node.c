#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: the pointer to a pointer to the head of the list
 * @str: the string to be duplicated and added to the new node
 *
 * Return: the address of the new element, or NULL if it has failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *n_node;

	/* check if string is NULL */
	if (str == NULL)
		return (NULL);

	/* allocate memory for a new list node */
	n_node = malloc(sizeof(list_t));
	/* check if malloc failed */
	if (n_node == NULL)
		return (NULL);

	/* duplicate the string using strdup */
	n_node->str = strdup(str);
	/* check if strdup failed */
	if (n_node->str == NULL)
	{
		free(n_node); /* free the allocated memory for the node */
		return (NULL);
	}

	/* calculate the length of the duplicated string */
	n_node->len = strlen(str);

	/* set the next pointer of the new node to point to the current head */
	n_node->next = *head;

	/* update the head pointer to point to the new node, making it the new head */
	*head = n_node;

	return (n_node); /* return the address of the new node */
}
