#include "lists.h"
#include <stdio.h>
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
		const char *str = current->str;
		size_t length = 0;
		while (str && *str != '\0')
		{
			length++;
			str++;
		}
		printf("[%lu] %s\n", (unsigned long)length, current->str != NULL ? current->str : "(nil)");
		count++;
		current = current->next;
	}

	printf("-> %lu element%s\n", (unsigned long)count, count != 1 ? "s" : "");
	return (count);
}
