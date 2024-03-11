#include "lists.h"
#include <stdio.h>
#include <stddef.h>

size_t print_listint(const listint_t* h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d", h->n);
		if (h->next != NULL)
		{
			printf(", ");
		}
		h = h->next;
		count++;
	}

	printf("\n");
	return (count);
}
