#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table
 * @ht: The hash table
 * @key: The key
 * @value: The value associated with the key
 *
 * Return: 1 if the addition succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *temp_node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	/* Check if key already exists in the linked list at the index */
	temp_node = ht->array[index];
	while (temp_node != NULL)
	{
		if (strcmp(temp_node->key, key) == 0)
		{
		/* Update the value if the key already exists */
			free(temp_node->value);
			temp_node->value = strdup(value);
			if (temp_node->value == NULL)
				return (0);
			return (1);
		}
		temp_node = temp_node->next;
	}

	/*Key doesn't exist, create a new node and add it to the linked list*/
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (new_node->key == NULL || new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return (0);
	}

	/* Add the new node at the beginning of the linked list */
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
