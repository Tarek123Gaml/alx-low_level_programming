#include "hash_tables.h"

/**
 * key_index - that gives index of key
 * @key: taks key
 * @size: taks size
 *
 * Return: index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
