#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked list
 * @h: pointer to a node
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 1;

	if (h == NULL)
		return (0);

	while (h->next != NULL) /* Looping to the end of the list */
	{
		h = h->next;
		count++;
	}

	return (count);
}
