#include "hash_tables.h"

/**
 * key_index- find index for given key
 *
 * @key:      key
 * @size:     size
 *
 * Return:    unsigned long int index for key
 *
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
