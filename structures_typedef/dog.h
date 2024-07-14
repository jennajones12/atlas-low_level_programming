#ifndef _DOG_H
#define _DOG_H
#include <stdio.h>
/**
 * struct dog - structure that defines new type with givin elements
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: none
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
 #endif
