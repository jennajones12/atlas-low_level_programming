0x17. C - Doubly linked lists

This directory contains a set of functions to handle operations on doubly linked lists (dlistint_t) in C. The provided functions adhere to the Betty style guidelines and compile with gcc using the -Wall -pedantic -Werror -Wextra -std=gnu89 flags. 

This README provides detailed information on each function along with usage examples to help understand and utilize doubly linked list functions effectively.

FUNCTIONS

0. Print list

	Purpose: Prints all the elements of a doubly linked list.

	Prototype: 'size_t print_dlistint(const dlistint_t *h);'

	Example Usage:

		size_t nodes_printed = print_dlistint(head);

1. List length

	Purpose: Returns the number of elements in a doubly linked list.

 	Prototype: 'size_t dlistint_len(const dlistint_t *h);'

	Example Usage:

		size_t list_length = dlistint_len(head);

2. Add node

	Purpose: Adds a new node at the beginning of a doubly linked list.

	Prototype: 'dlistint_t *add_dnodeint(dlistint_t **head, const int n);'

	Example Usage:

		dlistint_t *new_node = add_dnodeint(&head, 10);

3.  Add node at the end

	Purpose: Adds a new node at the end of a doubly linked list.

	Prototype: 'dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);'

	Example Usage:

		dlistint_t *new_node = add_dnodeint_end(&head, 20);

4. Free list

 	Purpose: Frees a doubly linked list.

	Prototype: 'void free_dlistint(dlistint_t *head);'

	Example Usage:

		free_dlistint(head);

5. Get node at index

	Purpose: Returns the nth node of a doubly linked list.
	
 	Prototype: 'dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);'

	Example Usage:

		dlistint_t *node = get_dnodeint_at_index(head, 2);

6. Sum list

	Purpose: Computes the sum of all the data (n) of a doubly linked list.

	Prototype: 'int sum_dlistint(dlistint_t *head);'

	Example Usage:

		int sum = sum_dlistint(head);

7. Insert at index

	Purpose: Inserts a new node at a given position.

	Prototype: 'dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);'

	Example Usage:

		dlistint_t *new_node = insert_dnodeint_at_index(&head, 2, 30);

8. Delete at index

	Purpose: Deletes the node at index index of a doubly linked list.

	Prototype: 'int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);'

	Example Usage:

		int success = delete_dnodeint_at_index(&head, 3);


COMPILATION

To compile code using these functions, include the relevant header file (lists.h) and use the following command:
	
	gcc -o your_program your_program.c linked_list_functions.c -Wall -Werror -Wextra -pedantic -std=gnu89

Replace 'your_program' with the name of program file.

NOTE

Handle edge cases and memory management appropriately within code.
