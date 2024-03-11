#include "lists.h"

/**
 * list_len - lists number of nodes in linked list
 * @h: head of linked list
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	 const list_t *current = h;
	 size_t count = 0;
	 
	 while (current != NULL)
	 {
		 count++;
		 current = current->next;
	 }

	return (count);
}
