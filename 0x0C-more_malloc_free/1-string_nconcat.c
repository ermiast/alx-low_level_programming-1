#include <stdlib.h>

/**
 * *string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: first bytes of s2 to be used
 * Return: pointer or NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
int i, j;
char *m = malloc(sizeof(s1) + n * sizeof(char) + 1);

if (m == 0)
	return (NULL);
if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 == "";

for (i = 0; s1[i] != '\0'; i++)
	m[i] = s1[i];

for (j = 0; s2[i] != '\0' && j < n; i++, j++)
	m[j] = s1[i];

return (m);
}
