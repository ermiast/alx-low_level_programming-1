#include "holberton.h"
/**
 * *_strncat - concatenates n bytes of two strings
 * @dest: pointer destination
 * @src: pointer source
 * Return: void
*/

char *_strncat(char *dest, char *src, int n)
{
int bytes = 0, i;
for (i = 0; dest[i] != '\0'; i++)
;

for (int a = 0; bytes < n; a++)
{
	bytes += sizeof(src[a]);
	dest[i] = src[a];
	i++;
}

return (dest);
}
