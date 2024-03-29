#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees the node memory
 * @head: points to the first node
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
