#include "dog.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * *new_dog - create a new dog
 * @name: string for name
 * @age: integer for age
 * @owner: string for owners
 * Return: a dog or NULL
 */


dog_t *new_dog(char *name, float age, char *owner)
{
struct dog *mydog;
mydog = malloc(sizeof(struct dog));

if (mydog == NULL)
	return (NULL);

mydog->name = strdup(name);
mydog->age = age;
mydog->owner = strdup(owner);

return (mydog);
}
