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

strcpy(mydog->name, name);
mydog->age = age;
strcpy(mydog->owner, owner);

return (mydog);
}
