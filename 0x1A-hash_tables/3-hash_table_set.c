#include "hash_tables.h"

/**
 * addNode - Adds a new node to the beginning of a linked list.
 * @head: Pointer to the head of the linked list.
 * @key: Key for the new node.
 * @value: Value for the new node.
 */
void addNode(hash_node_t **head, const char *key, const char *value)
{
    /* Create a new node */
    hash_node_t *newNode = (hash_node_t *)malloc(sizeof(hash_node_t));

    newNode->key = strdup(key);
    newNode->value = strdup(value);

    /* Make the new node point to the current head */
    newNode->next = *head;

    /* Update the head to point to the new node */
    *head = newNode;
}

/**
 * create_item - Creates a new hash node with the given key and value.
 * @key: Key for the new hash node.
 * @value: Value for the new hash node.
 *
 * Return: Pointer to the newly created hash node, or NULL if an error occurs.
 */
hash_node_t *create_item(const char *key, const char *value)
{
    /* Creates a linked list with our new element */
    hash_node_t *new_element = malloc(sizeof(hash_node_t));

    if (strcmp(key, "") == 0)
    {
        /* string cannot be empty */
        return (NULL);
    }

    /* Mem allocation check */
    if (new_element == NULL)
    {
        return (NULL);
    }

    /* Mem allocation for members of new_element */
    new_element->key = strdup(key);
    new_element->value = strdup(value);

    return (new_element);
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
    hash_node_t *new_element;
    unsigned long int index;
     hash_node_t *current_element;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
    {
        return 0; /*Invalid input, return failure*/
    }

    /* Create new element */
    new_element = create_item(key, value);

    /* Generate hash code for key & Generate key index for the key */
    index = key_index((const unsigned char *)key, ht->size);

    /* Store current index of array in a variable */
    current_element = ht->array[index];

    if (new_element == NULL)
    {
        return 0; /*Failed to create new element, return failure*/
    }

    /* Check if index in array is NULL */
    if (current_element == NULL)
    {
        /* If index is NULL, insert element (create linked list) */
        ht->array[index] = new_element;
        return 1; /* Return success*/
    }
    else
    {
        /* If index is not NULL, handle collision */
        addNode(&ht->array[index], key, value);
        return 1; /* Return success*/
    }
}

