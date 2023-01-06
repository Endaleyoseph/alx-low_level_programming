#include "hash_tables.h"

/**
 * create_item - creats an item
 * @ht: hash table
 * @key: the key
 * @value: the value associated with the key
 * @idx: the index at which the item is created
 * Return: 1 if successful, 0 if failed
 */

int create_item(hash_table_t *ht, const char *key, const char *value,
		unsigned long int idx)
{
	hash_node_t *item;
	char *k;
	char *v;

	item = malloc(sizeof(hash_node_t));
	if (item == NULL)
		return (0);
	k = strdup(key);
	if (!k)
	{
		free(item);
		return (0);
	}

	v = strdup(value);
	if (!v)
	{
		free(k);
		free(item);
		return (0);
	}

	item->key = k;
	item->value = v;
	if ((ht->array)[idx] == NULL)
		item->next = NULL;
	else
		item->next = ht->array[idx];
	ht->array[idx] = item;

	return (1);
}

/**
 * hash_table_set - adds element to the hash table
 * @ht: the hash table in which the key/value is added
 * @key: key string
 * @value: value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *item = NULL;
	char *v;

	if (!ht || !(ht->array) || !key || strlen(key) == 0 || !value)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	item = ht->array[index];
	while (item && (strcmp(key, item->key) != 0))
		item = item->next;
	if (item != NULL)
	{
		v = strdup(value);
		if (!v)
			return (0);
		if (item->value)
			free(item->value);
		item->value = v;
		return (1);
	}
	return (create_item(ht, key, value, index));
}
