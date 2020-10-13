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
int i = 0;
char *ss = malloc(sizeof(*str) + 1);
if (ss == NULL || str == NULL)
{
return (NULL);
}
else
{
while (ss[i] == '\0' && str[i] != '\0')
{
ss[i] = str[i];
i++;
}
return (ss);
}
}
