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
		return (1);

	while (h != NULL)
	{
		printf("%d\n", h->n); /* value of current node */

		h = h->next; /* Next node */
		count++;
	}

	return (count);
}
