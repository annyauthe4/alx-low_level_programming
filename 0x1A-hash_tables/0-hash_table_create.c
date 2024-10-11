#include "hash_tables.h"

/**
  * hash_function - maps keys to values.
  * @str: Pointer to key string.
  * @capacity: The size of the hash table
  *
  * Return: unsigned long index of the key.
  */
unsigned long hash_function(char *str, unsigned long capacity)
{
	unsigned long hash;
	int c;

	hash = 5381;
	c = 0;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c;
	}
	return (hash % capacity);
}
/**
  * hash_table_create - Creates a new hash table of certain size
  * @size: The size/capacity of the hash table.
  *
  * Return: table on success or NULL if failed.
  */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);
	table->size = size;
	table->array = calloc(table->size, sizeof(hash_node_t));

	if (table->array == NULL)
		return (NULL);
	return (table);
}
