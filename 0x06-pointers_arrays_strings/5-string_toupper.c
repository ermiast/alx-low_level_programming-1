#include "holberton.h"
/**
 * *sing_toupper - capitalize a sing
 * @s: pointer
 * Return: capitalzied sing
*/

char *sing_toupper(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
	if (s[i] <= 'z' && s[i] >= 'a')
		s[i] -= 32;
}
return (s);
}
