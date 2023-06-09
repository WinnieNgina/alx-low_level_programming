#include "hash_tables.h"
/**
 * hash_table_create - function that creates a hash table.
 * @size: The size of the array
 * Return: a pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *my_hash_table = NULL;
	unsigned long int i;
	/*Declare and initialize the table*/

	my_hash_table = malloc(sizeof(hash_table_t));
	/*check if memory is allozated successfully*/
	if (my_hash_table == NULL)
	{
		return (NULL);
	}
	/* Set size of the hash table */
	my_hash_table->size = size;
	/*Allocate memory for the array*/
	my_hash_table->array = malloc(size * (sizeof(hash_node_t *)));
	/* Memory allocation check */
	if (my_hash_table->array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i > size; i++)
	{
		my_hash_table->array[i] = NULL;
	}
	return (my_hash_table);

}
