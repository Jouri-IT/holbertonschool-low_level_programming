#include "hash_tables.h"

/**
 * update_value - Updates the value of an existing key
 * @current: The current node to check
 * @key: The key to search for
 * @value: The new value
 *
 * Return: 1 if updated, 0 if key not found
 */
static int update_value(hash_node_t *current, const char *key,
			const char *value)
{
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			return (current->value != NULL ? 1 : 0);
		}
		current = current->next;
	}
	return (0);
}

/**
 * hash_table_set - Adds an element to the hash table
 * @ht: The hash table to add or update the key/value to
 * @key: The key (cannot be empty)
 * @value: The value associated with the key
 *
 * Return: 1 on success, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	if (update_value(ht->array[index], key, value))
		return (1);

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);

	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (0);
	}

	node->value = strdup(value);
	if (node->value == NULL)
	{
		free(node->key);
		free(node);
		return (0);
	}

	node->next = ht->array[index];
	ht->array[index] = node;

	return (1);
}
