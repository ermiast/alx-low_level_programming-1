#include "holberton.h"
/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: void
*/

int _strcmp(char *s1, char *s2)
{

for (int i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
{
	if (s1[i] != s2[i])
	{
		return (s1[i] - s2[i]);
	}
}
return (0);
}
