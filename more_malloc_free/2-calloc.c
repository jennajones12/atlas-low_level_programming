#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * _calloc - function that allocates memory for array using malloc.
 * @nmemb: nuymber of memory spaces
 * @size: size of nmemb
 * Return: returns pointer to allocated space, NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size);

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	for (; i < nmemb * size; i++)
		*(ptr + i) = 0;

	return (ptr);
}
