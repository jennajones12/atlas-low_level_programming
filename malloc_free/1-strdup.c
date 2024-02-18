#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *
 *
 *
 */
char *_strdup(char *str)
{
	char *new_str, *start;	
	int i = 0, len = 0;

	if (str == NULL)
        	return (NULL);

	start = str;
	
	while (*str)
	{
		len++;
		str++;
	}

	str = start;
	new_str = malloc(sizeof(char) * (len + 1));
	start = new_str;

	if (new_str == NULL)
	{

    for (i = 0; i < len; i++) 
    {
        new_str[i] = str[i];
    }
    new_str[len] = '\0';
    return (start);
	}
	else
		return (NULL);
}
