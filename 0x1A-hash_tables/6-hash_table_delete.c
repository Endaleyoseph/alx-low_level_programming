#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table
 *
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *item, *next;
	unsigned long int i;

	if (!ht)
		return;
	if (!(ht->array))
	{
		free(ht);
		return;
	}

	for (i = 0; i < ht->size; i++)
	{
		item = ht->array[i];
		while (item != NULL)
		{
			next = item->next;
			if (item->key)
				free(item->key);
			if (item->value)
				free(item->value);
			item->key = NULL;
			item->value = NULL;
			free(item);
			item = next;
		}
	}
	free(ht->array);
	free(ht);
}
