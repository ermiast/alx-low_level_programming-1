#include <stdlib.h>

/**
 * *_strdup - return a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str: string
 * Return: 0
 */

char *_strdup(char *str)
{

if (*str != 0)
{
	int size = 0;

	for (size = 0; str[size] != '\0'; size++)
	;

	char *m = malloc(size * sizeof(*str));

	if (m != 0)
	{
		for (int i = 0; str[i] != '\0'; i++)
		{
			m[i] = str[i];
		}
		return (m);
	}
}
return (0);
}
