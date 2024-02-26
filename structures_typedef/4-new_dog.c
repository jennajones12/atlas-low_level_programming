#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - creates new dog structure
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: none
 */
int string_length(const char *str)
{
	int len = 0;
	while (str[len} != '\0')
{
	len++;
}
return (len);
}

void 
	dog_t *new_dog = (dog_t *)malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}

	new_dog->name = strdup(name);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->age = age;

	new_dog->owner = strdup(owner);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	return (new_dog);
}
