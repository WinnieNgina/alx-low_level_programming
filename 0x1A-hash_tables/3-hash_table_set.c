#include "hash_tables.h"

/**
* create_item - Creates a new hash node with the given key and value.
* @key: Key for the new hash node.
* @value: Value for the new hash node.
*
* Return: Pointer to the newly created hash node, or NULL if an error occurs.
*/
hash_node_t *create_item(const char *key, const char *value)
{
	hash_node_t *new_item = malloc(sizeof(hash_node_t));

	if (!new_item)
		return (NULL);

	new_item->key = strdup(key);
	new_item->value = strdup(value);
	new_item->next = NULL;

	return (new_item);
}

/**
* hash_table_set - Inserts or updates an element in the hash table.
* @ht: Pointer to the hash table.
* @key: Key for the element.
* @value: Value for the element.
*
* Return: 1 on success, 0 on failure.
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *current_node;

	if (!ht || !key || !value)
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	/* // Check if the key already exists and update the value if so */
	current_node = ht->array[index];
	while (current_node)
	{
		if (strcmp(current_node->key, key) == 0)
		{
		free(current_node->value);
		current_node->value = strdup(value);
		return (1);
		}
		current_node = current_node->next;
	}

	/* // Create a new node and add it at the beginning of the list */
	new_node = create_item(key, value);
	if (!new_node)
		return (0);

	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
