#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to newly allocated space in mem containing the
 * concatenated strings, NULL if mem allocation fails.
 */

char *str_concat(char *s1, char *s2)
{
	char *new_str, *starts1, *starts2;
	int i = 0, lens1 = 0, lens2 = 0;

	starts1 = s1;
	starts2 = s2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[lens1] != '\0')
		lens1++;

	while (s2[lens2] != '\0')
		lens2++;

	s2 = starts2;
	new_str = malloc((lens1 + lens2 + 1) * sizeof(char));
	starts1 = new_str;
	if (new_str == NULL)
		return (NULL);

	while (*s1 != '\0')
	{
		new_str[i] = *s1;
		s1++;
		i++;
	}

	while (*s2 != '\0')
	{
		new_str[i] = *s2;
		s2++;
		i++;
	}

	new_str[i] = '\0';

	return (starts1);
}
