#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Deletes the head node of a listint_t linked list
 * @head: A pointer to a pointer to the head of the list
 * Return: The data of the deleted head node, or 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (*head == NULL)
	{
		return (0);
	}

	data = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);
	return (data);
}
