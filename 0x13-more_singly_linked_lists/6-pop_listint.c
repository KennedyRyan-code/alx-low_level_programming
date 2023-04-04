#include "lists.h"
/**
 * pop_listint - deletes the head node of a list
 * @head: a pointer to a pointer to a node
 *
 * Return: 0
 *
 */

int pop_listint(listint_t **head)
{
	int data; /* store the data of the head node */
	listint_t *temp;

	if (*head == NULL)
		return (0);

	data = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (data);
}
