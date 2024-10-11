#include "hash_tables.h"

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
	table->array = calloc(table->size, sizeof(hash_node_t *));

	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}
	return (table);
}
