#include "lists.h"

/**
 * print_listint - prints all the elements of a given list.
 * @h: pointer to a node
 *
 * Return: number of node
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		printf("%d\n", h->n); /* Value of current node */

		h = h->next; /* Move to Next node */
		count++;
	}
	printf("%d\n", h->n); /* Value of Last node */

	return (count);
}
