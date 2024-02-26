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
	while (str[len] != '\0')
{
	len++;
}
return (len);
}

void string_copy(char *dest, const char *src)
{
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
}

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = (dog_t *)malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}

	int nameLen = string_length(name);
	int ownerLen = string_length(owner);

	new_dog->name = (char *)malloc(nameLen + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	string_copy(new_dog->name, name);
	
	new_dog->owner = (char *)malloc(ownerLen + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	string_copy(newDog->owner, owner);

	new_dog->age = age;

	return (new_dog);
}
