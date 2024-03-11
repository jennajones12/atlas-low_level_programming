#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Deletes node at index of listint_t linked list
 * @head: A pointer to a pointer to the head of the listint_t linked list
 * @index: The index of the node to delete. Index starts at 0
 * Return: 1 if the deletion is successful, -1 if it fails
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	listint_t *temp;
	unsigned int i;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}

	for (i = 0; current != NULL && i < index - 1; i++)
	{
		current = current->next;
	}

	if (current == NULL || current->next == NULL)
	{
		return (-1);
	}

	temp = current->next->next;
	free(current->next);
	current->next = temp;

	return (1);
}
