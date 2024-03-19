0x1A. C - Hash tables

This directory contains an implementation of a hash table in C, along with functions to create, manipulate, and delete hash tables. The provided functions adhere to the Betty style guidelines and compile with gcc using the -Wall -pedantic -Werror -Wextra -std=gnu89 flags.


FUNCTIONS

0. >>> ht = {}

   Purpose: Creates a hash table with a specified size.

   Prototype: 'hash_table_t *hash_table_create(unsigned long int size);'

   Example Usage:

       hash_table_t *ht = hash_table_create(1024);

1. key -> index

   Purpose: Computes the index of a key in the hash table.

   Prototype: 'unsigned long int key_index(const unsigned char *key, unsigned long int size);'

   Example Usage:

           unsigned long int index = key_index((const unsigned char *)"example_key", ht->size);

2. >>> ht['betty'] = 'cool'

   Purpose: Adds or updates an element in the hash table.

   Prototype: 'int hash_table_set(hash_table_t *ht, const char *key, const char *value);'

   Example Usage:

       hash_table_set(ht, "key1", "value1");

3. >>> ht['betty']

   Purpose: Retrieves the value associated with a given key from the hash table.

   Prototype: 'char *hash_table_get(const hash_table_t *ht, const char *key);'

   Example Usage:

       char *value = hash_table_get(ht, "key1");

4. >>> print(ht)

   Purpose: Prints the key/value pairs stored in the hash table.

   Prototype: 'void hash_table_print(const hash_table_t *ht);'

   Example Usage:

       hash_table_print(ht);

5. >>> del ht

   Purpose: Deletes a hash table along with all its elements.

   Prototype: 'void hash_table_delete(hash_table_t *ht);'

   Example Usage:

       hash_table_delete(ht);


COMPILATION

    gcc -o your_program your_program.c hash_tables.c -Wall -Werror -Wextra -pedantic -std=gnu89

Replace 'your_program' with the name of your program file.


NOTE

 Include header file 'hash_tables.h' in program.

 Handle memory management (allocations and deallocations) within the function and ensure proper error handling in code.
