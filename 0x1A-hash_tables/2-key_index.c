#include "hash_tables.h"
/**
 * key_index - gives you the index of a key.
 * @key: is the key
 * @size: size of the array of the hash table
 * Return: index at which the key/value pair is stored in the array the table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_code = hash_djb2(key);
	unsigned long int index = hash_code % size;

	return (index);
}
