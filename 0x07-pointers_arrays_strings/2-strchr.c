#include "holberton.h"

/**
 * *_strchr - fills memory with a constant byte.
 * @s: pointer to put the constant
 * @c: constant
 * Return: s
 */


char *_strchr(char *s, char c)
{
	int i;
	char *ptr;

	for (i = 0; s[i] != '\0'  ; i++)
	{
		if (s[i] == c)
		{
			ptr = &s[i];
			return (ptr);
		}
	}
	return ('\0');
}
 