#include "hash_tables.h"

/**
 * key_index - gives the index of a key
 * @key: string
 * @size: the size of the array of the hash table
 * Return: the index at which the key and the value should be placed
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash, index;

	hash = hash_djb2(key);
	index = hash % size;

	return (index);
}
