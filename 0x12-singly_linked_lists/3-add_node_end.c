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
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	char *str_copy = strdup(str);

	if (str_copy == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->str = str_copy;
	new_node->len = strlen(str_copy);
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		list_t *current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_node; /* append new node to end of list */
	}
	return (new_node);

}
