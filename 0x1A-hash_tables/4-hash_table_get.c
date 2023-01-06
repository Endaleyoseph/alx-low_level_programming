#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: the hash table from which the value is looked into
 * @key: the key
 * Return: the value associated with the elemnt,
 * NULL if the key couldn't be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *item;
	unsigned long int index;

	if (!ht || !key)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	item = ht->array[index];
	if (item != NULL)
	{
		while (item != NULL)
		{
			if (strcmp(item->key, key) == 0)
				return (item->value);
			item = item->next;
		}
		return (NULL);
	}
	return (NULL);
}
