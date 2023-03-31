#include <string.h>
#include "lists.h"

/**
 * list_t *add_node_end - adds a new node at the end of a list
 * @head: a pointer
 * @str: a string
 *
 * Return: address of the new element.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *last_node = *head;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(str);

	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (last_node->next != NULL)
		last_node = last_node->next;

	last_node->next = new_node;

	return (new_node);
}
