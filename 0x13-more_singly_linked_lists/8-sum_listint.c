#include "lists.h"
/**
 * sum_listint - returns the sum of all the data (n) of
 * a linked list.
 * @head: a pointer to a node
 *
 * Return: the sum of all data or 0
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n; /* add the data of the current node to sum */
		head = head->next; /* move to next node */
	}
	return (sum);
}
