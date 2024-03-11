#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
* add_node - adds new node to beginning
* @head: pointer to list
* @str: string to be duplicated
* Return: address of new element, NULL if fail
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	int length= 0;

	temp = malloc(sizeof(list_t));
	if (str == NULL)
	{
		return (NULL);
	}

	while (str[length])
		length++;

	temp->len = length;
	temp->str = strdup(str);
	temp->next = *head;
	*head = temp;
	return (temp);
}
