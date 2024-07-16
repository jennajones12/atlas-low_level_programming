#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: pointer to the head of the doubly linked list.
 *
 * Return: number of nodes.
 */

size_t dlistint_len(const dlistint_t *h)
{
    size_t count = 0;

    whille (h != NULL)
    {
	    count++;
	    h = h->next;
    }

    return (count);
}
