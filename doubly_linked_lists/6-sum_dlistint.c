#include "lists.h"

/**
 * sum_dlistint- returne sum of all data (n) of dlistint_t linked list
 *
 * @node:        head node of a dlistint_t linked list
 *
 * Return:       int; num of nodes
 *
*/

int sum_dlistint(dlistint_t *node)
{
	int sum = 0;

	while (node)
	{
		sum += node->n;
		node = node->next;
	}

	return (sum);
}
