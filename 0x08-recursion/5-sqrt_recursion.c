#include "holberton.h"
#include <stdio.h>
/**
 * _sqrt_recursion - description
 * @haystack: string
 * @needle: pointer
 * Return: pointer
 */

int _sqrt_recursion(int n)
{
int i, j;

for (i = 0; haystack[i] > '\0'; i++)
{
	for (j = i; haystack[j] > '\0' && needle[j - i] > '\0'; j++)
	{
		if (haystack[j] != needle[j - i])
		{
			break;
		}
	}
	if (needle[j - i] == '\0')
	{
		return (haystack + i);
	}
}
return (0);
}
