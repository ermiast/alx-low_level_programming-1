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
char *n, *o;

mydog = malloc(sizeof(struct dog));

if (mydog == NULL)
	return (NULL);

n = malloc(sizeof(name));
if (n == NULL)
	return (NULL);

o = malloc(sizeof(owner));
if (o == NULL)
	return (NULL);

n = strdup(name);
o = strdup(owner);

mydog->name = n;
//mydog->name* = strdup(name);
mydog->age = age;
mydog->owner = o;
//mydog->owner = strdup(owner);

return (mydog);
}
