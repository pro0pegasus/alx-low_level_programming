#include "hash_tables.h"

/**
 * key_index - Get the index at which a key/value
 *      pair should be stored in arr of a hash table.
 * @key: Key to get the index of.
 * @size: Size of the arr of the hash table.
 *
 * Return: The index of the key.
 * Description: Uses the djb2 algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
