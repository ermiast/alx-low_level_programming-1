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

char *m = malloc(sizeof(*str) + 1);
int i;

if (*str != 0 && m != 0)
{
	for (i = 0; str[i] != '\0'; i++)
		m[i] = str[i];

	return (m);
}
return ('\0');
}
