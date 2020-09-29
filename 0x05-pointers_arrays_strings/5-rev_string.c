#include "holberton.h"
/**
 * rev_string - prints reversed string, followed by a new line
 * @s: pointer to the string to print
 * Return: void
*/

void rev_string(char *s)
{
int i = 0, ii = 0;
while (s[i])
	i++;

char s1;
while (i--/2)
{
	s1 = s[i];
	s[ii] = s[i];
	s[i] = s1; 
	ii++;
}

}
