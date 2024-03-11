#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list.
 * @head: A pointer to a pointer to the head of the listint_t list
 * @n: The integer to be added as the new node's n member
 * Return: The address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	if (head == NULL)
	{
		return (NULL);
	}

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
	{
		return (NULL);
	}

	temp->n = n;
	temp->next = *head;
	*head = temp;

	return (temp);
}
