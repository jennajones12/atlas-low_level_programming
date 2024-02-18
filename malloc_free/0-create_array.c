#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Creates an array of chars initialized with a specific char.
 * @size: The size of array to be created.
 * @c: character to initialize the array with.
 *
 *Return: Pointer to the array, if successful; otherwise NULL.
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i = 0;

	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);

	if (size == 0)
		return (NULL);

	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);
}
