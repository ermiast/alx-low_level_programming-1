#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *_strdup - return a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str: string
 * Return: 0
 */

char *_strdup(char *str)
{
int i, size;
char *m;
for (size = 0; str[size] != '\0'; size++)
;

m = malloc(size * sizeof(*str) + 1);

if (size > 0 && m != 0)
{
	for (i = 0; i < size; i++)
		m[i] = str[i];
	return (m);
}

return (NULL);
}
