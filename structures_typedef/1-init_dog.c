#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initializes variable of type struct dog
 * @d: pointer to stucture
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: NULL
 */
void init_dog(dog_t *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
