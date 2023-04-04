#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at a given index
 * @head: pointer to the pointer to the first node in the list
 * @index: index of the node to be deleted
 *
 * Return: 1 if succeeded, -1 otherwise
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *temp;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;

	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}

	for (i = 0; i < index - 1; i++)
	{
		if (current->next == NULL)
			return (-1);

		current = current->next;
	}

	temp = current->next;
	if (temp == NULL)
		return (-1);

	current->next = temp->next;
	free(temp);

	return (1);
}
