#include "holberton.h"
/**
 * *_strncat - concatenates n bytes of two strings
 * @dest: pointer destination
 * @src: pointer source
 * Return: void
*/

char *_strncat(char *dest, char *src, int n)
{
int i;
for (i = 0; dest[i] != '\0'; i++)
;

for (int a = 0; a < n && dest[a] != '\0'; a++, i++)
{
	dest[i] = src[a];
}

return (dest);
}
