#include "lists.h"
/**
 * free_listint2 - frees a list
 * @head: a pointer to a pointer to a node
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL) /* Loop until the end of the list */
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
