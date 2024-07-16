#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at index `index` of dlistint_t linked list.
 * @head: double pointer to head of doubly linked list.
 * @index: index of node to be deleted. Index starts at 0.
 *
 * Return: 1 if succeeded, -1 if failed.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;

	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	for (i = 0; current != NULL && i < index; i++)
		current = current->next;

	if (current == NULL)
		return (-1);

	if (current->next != NULL)
		current->next->prev = current->prev;
	if (current->prev != NULL)
		current->prev->next = current->next;

	free(current);

	return (1);
}
