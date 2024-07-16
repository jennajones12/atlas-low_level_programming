#include "lists.h"

/**
 * insert_dnodeint_at_index- insert a new node at a given index
 *
 * @node:                    the head of a dlistint_t linked list
 * @index:                   the index to put the new node (0-based)
 * @n:                       the value to store in the n of the new node
 *
 * Return:                   the address of the new node or NULL if it failed
 *
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp;
	unsigned int i;

	if (idx == 0)
		return (add_dnodeint(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	temp = *h;
	for (i = 0; temp != NULL && i < idx; i++)
	{
		if (i == idx - 1)
		{
			if (temp->next == NULL)
				return (add_dnodeint_end(h, n));

			new_node->next = temp->next;
			new_node->prev = temp;
			if (temp->next != NULL)
				temp->next->prev = new_node;
			temp->next = new_node;
			return (new_node);
		}
		temp = temp->next;
	}

	free(new_node);
	return (NULL);
}
