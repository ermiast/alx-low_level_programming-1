#include <stdlib.h>

/**
 * *_strlen: find length of a string
 * @s: string
 * Return: int
 */

int _strlen(char *s)
{
int size;
for (size = 0; s[size] != '\0'; s++)
;
return (size);
}


/**
 * *str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: string or NULL
 */

char *str_concat(char *s1, char *s2)
{

int size1 = _strlen(s1), size2 = _strlen(s2), i = 0, mIndex = 0;

char *m = malloc(size1 * size2 * sizeof(*s1));

if (m != 0)
{
	for (; s1[i] != '\0'; i++, mIndex++)
	{
		m[mIndex] = str[i];
	}
	return (m);
}

return (0);
}
