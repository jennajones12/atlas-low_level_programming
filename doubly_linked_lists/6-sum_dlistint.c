#include "lists.h"
#include <stdlib.h>

/**
i * sum_dlistint - Returns the sum all the data (n) of dlistint_t linked list
 * @head: Pointer to the head of the linked list.
 * Return: Sum of all the data (n) of the linked list, or 0 if list is empty.
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);

}
