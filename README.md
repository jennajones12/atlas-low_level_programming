README

This repository contains C code for manipulating doubly linked lists (dlistint_t). The provided functions adhere to the Betty style guidelines and compile with gcc using the -Wall -pedantic -Werror -Wextra -std=gnu89 flags.

FUNCTIONS

1. delete_dnodeint_at_index: This function deletes the node at a specified index in doubly linked list.
	
Prototype
      
      int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);

Parameters 
 
'head': Double pointer to the head of the doubly linked list.

'index': Index of the node to delete. Indexing starts from 0.

Return Value

'1' if deletion is successful.

'-1' if deletion fails (e.g., invalid index or empty list).
     
Usage Example

    dlistint_t *head = NULL;
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);

    delete_dnodeint_at_index(&head, 1); // Deletes node at index 1
