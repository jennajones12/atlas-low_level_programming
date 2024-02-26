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

dog_t *new_dog(char *name, float age, char *owner)
{
	if (name == NULL || owner == NULL)
		return NULL;

	int name_len = 0;
	while (name[name_len] != '\0')
		name_len++;

	int owner_len = 0;
	while (owner[owner_len] != '\0')
		owner_len++;

	dog_t *new_dog = (dog_t *)malloc(sizeof(dog_t));
	if (newDog == NULL)
	{
		return (NULL);
	}

	new_dog->name = (char *)malloc((name_len + 1) * sizeof(char));
	 if (new_dog->name == NULL)
	 {
		 free(new_dog);
		 return (NULL);
	 }
	 new_dog->owner = (char *)malloc((owner_len + 1) * sizeof(char));
	 if (new_dog->owner == NULL)
	 {
		 free(new_dog->name);
		 free(new_dog);
		 return (NULL);
	 }

	 char *cpyname = new_dog->name;
	 char *cpyowner = new_dog->owner;
	 while (*name != '\0')
	 {
		 *cpyname = *name;
		 cpyname++;
		 name++;
	 }
	 *cpyname = '\0';

	 while (*owner != '\0')
	 {
		 *cpyowner = *owner;
		 cpyowner++;
		 owner++;
	 }
	 *cpyowner = '/0';

	 new_dog->age = age;

	 return (new_dog);
}
