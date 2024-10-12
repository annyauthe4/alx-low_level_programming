#include "hash_tables.h"

/**
 * hash_table_print - Prints the key-value pairs in the hash table
 * @ht: The hash table
 *
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	int first_pair = 1; /* To manage the comma placement */

	if (ht == NULL)
		return;

    /* Start printing the hash table */
	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			if (!first_pair)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);

			first_pair = 0;
			node = node->next;
		}
	}
	printf("}\n");
}
