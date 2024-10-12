#include "hash_tables.h"


/**
  * create_node_item - Creates the items in the key:value node
  * @key: Pointer to the key string
  * @value: Pointer to the value stored at key index
  *
  * Return: newly created node items on success, otherwise NULL
  */
hash_node_t *create_node_item(const char *key, const char *value)
{
	hash_node_t *new_node;
	char *value_copy;

	if (key == NULL || value == NULL || *key == '\0')
		return (NULL);
	value_copy = strdup(value);
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(value_copy);
		return (NULL);
	}
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(value_copy);
		free(new_node);
		return (NULL);
	}
	new_node->value = value_copy;
	new_node->next = NULL;

	return (new_node);
}
/**
  * hash_table_set - Adds new elements to the hash table
  * @ht: the hash table to be updated
  * @key: The key. Must not be an empty string
  * @value: A duplicate value associated with the key
  *
  * Return: 1 on success, else 0
  */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *current_node;
	unsigned long index;

	if (ht == NULL || key == NULL || value == NULL || *key == '\0')
		return (0);
	index = key_index((const unsigned char *)key, ht->size);

	current_node = ht->array[index];
	while (current_node != NULL)
	{
		if (strcmp(current_node->key, key) == 0)
		{
			free(current_node->value);
			current_node->value = strdup(value);
			if (current_node->value == NULL)
				return (0);
			return (1);
		}
		current_node = current_node->next;
	}
	new_node = create_node_item(key, value);
	if (new_node == NULL)
		return (0);

	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
