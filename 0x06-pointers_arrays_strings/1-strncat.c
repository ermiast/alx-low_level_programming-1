#include "holberton.h"
/**
 * *_strncat - concatenates n bytes of two strings
 * @dest: pointer destination
 * @src: pointer source
 * @n: number of bytes
 * Return: void
*/

char *_strncat(char *dest, char *src, int n)
{
int i;
for (i = 0; dest[i] != '\0'; i++)
;

for (int a = 0; n > 0 && dest[a] != '\0'; a++, n--, i++)
	dest[i] = src[a];

if (i < n)
	dest[i] = '\0';

return (dest);
}
