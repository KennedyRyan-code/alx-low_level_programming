#include "hash_tables.h"

/**
 * hash_table_get - Retrieves the value associated with a key
 * @ht: The hash table
 * @key: The key to search for
 *
 * Return: The value associated with the key, or NULL if key couldn't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *temp_node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	/* Search the linked list at the index for the key */
	temp_node = ht->array[index];
	while (temp_node != NULL)
	{
		if (strcmp(temp_node->key, key) == 0)
			return (temp_node->value);

		temp_node = temp_node->next;
	}

	return (NULL);
}
