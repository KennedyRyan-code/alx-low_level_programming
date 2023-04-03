#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a list
 * @head: pointer to a pointer to a node
 * @n: data
 *
 * Return: address of the new element or NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{

	listint *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;

	*head = new_node; /* Update the head pointer to point to new node */

	return (new_node);
}
