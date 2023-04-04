#include "lists.h"
/**
 * free_listint - frees a list
 * @head: pointer to a node
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next; /* save the next pointer */

		free(head);
		head = temp; /* move to next node */
	}
}
