#include "lists.h"
#include <stddef.h>

/**
 * sum_listint - Sums all the data (n) of a listint_t linked list
 * @head: A pointer to the head of the listint_t list
 * Return: The sum of all the data (n) in the list
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
