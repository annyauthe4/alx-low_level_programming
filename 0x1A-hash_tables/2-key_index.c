#include "hash_tables.h"


/**
  * key_index - Returns the index of the key passed
  * @key: The string passed as key
  * @size: The size of the hash table
  *
  * Return: int index of the key.
  */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;

	if (key == NULL || size == 0)
		return (0);
	hash_value = 0;
	hash_value = hash_djb2(key);

	return (hash_value % size);
}
