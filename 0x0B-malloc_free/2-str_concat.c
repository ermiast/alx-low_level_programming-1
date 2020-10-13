#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * _strlen - find length of a string
 * @s: string
 * Return: int
 */


int _strlen(char *s)
{
int size;
for (size = 0; s[size] != '\0'; size++)
;
return (size);
}

/**
 * *str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer
 */

char *str_concat(char *s1, char *s2)
{

int size1 = _strlen(s1), size2 = _strlen(s2), i, mIndex = 0;
char *m = malloc((size1 + size2) * sizeof(char));

if (size1 + size2 == 0 || m == NULL)
	return (NULL);

for (i = 0; s1[i] != '\0'; i++, mIndex++)
	m[mIndex] = s1[i];

for (i = 0; s2[i] != '\0'; i++, mIndex++)
	m[mIndex] = s2[i];

return (m);
}
