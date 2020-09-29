#include "holberton.h"
/**
 * rev_string - prints reversed string, followed by a new line
 * @s: pointer to the string to print
 * Return: void
*/

void rev_string(char *s)
{
int i = sizeof(s) / sizeof(s[0]) - 1;
char s1[i];
while (i)
{
	s1[i] = s[i];
	i--;
}
s = s1;
}
