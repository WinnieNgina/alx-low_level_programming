#include "hash_tables.h"

/**
 * hash_table_print - prints entire hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int first = 1;

	if (ht == NULL)
	{
		return;
	}

	printf("{");

	/* Check if ht is NULL */
	if (ht != NULL)
	{
		/* Iterate through indexes in array */
		for (i = 0; i < ht->size; i++)
		{
			/* Iterate through nodes */
			while (ht->array[i] != NULL)
			{
				if (first == 0)
					printf(", ");
				printf("\'%s\': \'%s\'", ht->array[i]->key, ht->array[i]->value);
				first = 0;
				ht->array[i] = ht->array[i]->next;
			}
		}
	}

	/* If true do nothing */
	printf("}\n");

	/* If false print hash table */
}
