#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - creates new dog structure
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: pointer to new dog structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *cpyname, *cpyowner;
	int name_len = 0, owner_len = 0;

	if (name == NULL || owner == NULL)
		return NULL;

	while (name[name_len])
		name_len++;
	while (owner[owner_len])
		owner_len++;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	
	new_dog->name = (cpyname); malloc((name_len + 1) * sizeof(char));
	if (new_dog->name == NULL)
	 {
		 free(new_dog);
		 return (NULL);
	 }
	 new_dog->owner = (cpyowner); malloc((owner_len + 1) * sizeof(char));
	 if (new_dog->owner == NULL)
	 {
		 free(new_dog);
		 return (NULL);
	 }
	 new_dog->name = cpyname;
	 new_dog->age = age;
	 new_dog->owner = cpyowner;
	 return (new_dog);
}
