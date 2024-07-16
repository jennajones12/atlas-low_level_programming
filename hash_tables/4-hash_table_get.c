#include "hash_tables.h"

/**
 * hash_table_get- get value from a hash table based on a key
 *
 * @table:         pointer to hash table to search
 * @key:           pointer to key to find value string
 *
 * Return:         pointer to the str in value for key
 *
 */

char *hash_table_get(const hash_table_t *table, const char *key)
{
	unsigned long int index;
	hash_node_t *temp_node;

	if (table == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, table->size);
	if (table->array[index] != NULL)
	{
		temp_node = table->array[index];
		while (temp_node)
		{
			if (strcmp(temp_node->key, key) == 0)
			{
				return (temp_node->value);
			}
			temp_node = temp_node->next;
		}
	}
	return (NULL);
}
