README

This repository contains C code for manipulating doubly linked lists (dlistint_t). The provided functions adhere to the Betty style guidelines and compile with gcc using the -Wall -pedantic -Werror -Wextra -std=gnu89 flags.

FUNCTIONS

1. 'delete_dnodeint_at_index'

	This function deletes the node at a specified index in doubly linked list.
	
Prototype:
      
      int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);


Parameters: 
 
'head': Double pointer to the head of the doubly linked list.

'index': Index of the node to delete. Indexing starts from 0.


Return Value:

'1' if deletion is successful.

'-1' if deletion fails (e.g., invalid index or empty list).
     

Usage Example:

    dlistint_t *head = NULL;
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);

    delete_dnodeint_at_index(&head, 1); // Deletes node at index 1


2. 'add_dnodeint_end'

	This function adds a new node at the end of a doubly linked list.


Prototype:

 	dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);


Parameters:

'head': Double pointer to the head of the doubly linked list.

'n': Integer value to be stored in the new node.


Return Value:

Pointer to the newly added node.


Usage Example:

	dlistint_t *head = NULL;
	add_dnodeint_end(&head, 1); // Adds a node with value 1 to the end


3. 'print_dlistint'

	This function prints all elements of a doubly linked list.


Prototype:

	size_t print_dlistint(const dlistint_t *h);


Parameters:

'h': Pointer to the head of the doubly linked list.


Return Value:

Number of nodes in the list.


Usage Example:

	dlistint_t *head = NULL;
	add_dnodeint_end(&head, 1);
	add_dnodeint_end(&head, 2);
	add_dnodeint_end(&head, 3);

	print_dlistint(head); // Prints: 1 2 3


COMPLILATION

To compile the code, use the following command:

	gcc -Wall -pedantic -Werror -Wextra -std=gnu89 *.c -o executable_name

Replace executable_name with your desired name for the executable file.
