#include "hash_tables.h"

/**
 * create_item - creats an item
 * @key: the key
 * @value: the value associated with the key
 * Return: pointer to the item
 */

hash_node_t *create_item(const char *key, const char *value)
{
	hash_node_t *item;
	char *k;
	char *v;

	item = malloc(sizeof(hash_node_t));
	if (item == NULL)
		return (NULL);
	k = strdup(key);
	if (!k)
	{
		free(item);
		return (NULL);
	}

	v = strdup(value);
	if (!v)
	{
		free(k);
		free(item);
		return (NULL);
	}

	item->key = k;
	item->value = v;
	item->next = NULL;

	return (item);
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
	hash_node_t *item, *tmp;
	hash_node_t *new = NULL;
	char *v;

	if (!ht || !(ht->array) || !key || strlen(key) == 0 || !value)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	item = ht->array[index];
	tmp = ht->array[index];
	if (item == NULL)
	{
		ht->array[index] = create_item(key, value);
		return (1);
	}
	else
	{
		while (item != NULL && (strcmp(key, item->key) != 0))
			item = item->next;
		if (item != NULL)
		{
			v = strdup(value);
			if (item->value)
				free(item->value);
			item->value = v;
			return (1);
		}
		while (tmp->next != NULL)
			tmp = tmp->next;
		new = create_item(key, value);
		tmp->next = new;
		return (1);
	}
	return (0);
}
