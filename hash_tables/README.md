0x1A. C - Hash tables

This directory contains an implementation of a hash table in C, along with functions to create, manipulate, and delete hash tables. The provided functions adhere to the Betty style guidelines and compile with gcc using the -Wall -pedantic -Werror -Wextra -std=gnu89 flags.

This README provides detailed information on each function along with usage examples to help understand and utilize hash table functions effectively.

FUNCTIONS

1. 'hash_table_create'

   Purpose: Creates a hash table with a specified size.

   Prototype: 'hash_table_t *hash_table_create(unsigned long int size);'

   Example Usage:

       hash_table_t *ht = hash_table_create(1024);

2. 'key_index'

   Purpose: Computes the index of a key in the hash table.

   Prototype: 'unsigned long int key_index(const unsigned char *key, unsigned long int size);'

   Example Usage:

           unsigned long int index = key_index((const unsigned char *)"example_key", ht->size);

3. 'hash_table_set'

   Purpose: Adds or updates an element in the hash table.

   Prototype: 'int hash_table_set(hash_table_t *ht, const char *key, const char *value);'

   Example Usage:

       hash_table_set(ht, "key1", "value1");

4. 'hash_table_get'

   Purpose: Retrieves the value associated with a given key from the hash table.

   Prototype: 'char *hash_table_get(const hash_table_t *ht, const char *key);'

   Example Usage:

       char *value = hash_table_get(ht, "key1");

5. 'hash_table_print'

   Purpose: Prints the key/value pairs stored in the hash table.

   Prototype: 'void hash_table_print(const hash_table_t *ht);'

   Example Usage:

       hash_table_print(ht);

6. 'hash_table_delete'

   Purpose: Deletes a hash table along with all its elements.

   Prototype: 'void hash_table_delete(hash_table_t *ht);'

   Example Usage:

       hash_table_delete(ht);


COMPILATION

    gcc -o your_program your_program.c hash_tables.c -Wall -Werror -Wextra -pedantic -std=gnu89

Replace 'your_program' with the name of program file.


NOTE

 Include header file 'hash_tables.h' in program.

 Handle memory management (allocations and deallocations) within the function and ensure proper error handling in code.
