#include "lists.h"
#include <stdio.h>
#include <string.h>
/**
 * print_list - function that prints linked list
 * @h: pointer to head of list
 * Return: number of nodes in lists
 */

size_t print_list(const list_t *h)
{
	const list_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		printf("[%lu] %s\n", (unsigned long)strlen(current->str), current->str != NULL ? current->str : "(nil)");
		count++;
		current = current->next;
	}
	
	printf("-> %lu element%s\n", (unsigned long)count, count != 1 ? "s" : "");
	return (count);
}
