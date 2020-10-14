#include <stdlib.h>
#include <stdio.h>

/*INCOMPLETE*/

/**
 * _strlen - find length of a string
 * @s: string
 * Return: int
 */


int _strlen(char *s)
{
int size = 0;
for (; s[size] != '\0'; size++)
;
return (size);
}

/**
 * *argstostr - description
 * @ac: int
 * @av: arguments
 * Return: string
 */

char **strtow(char *str)
{
int i, nw = 0, characters = 0;
char *s;
int lenw[] = {};

if (str == NULL || str == "")
	return (NULL);

//check the number of words
for (i = 1; str[i] != '\0'; i++){
	if (str[i] == ' ')
	{
		if (str[i - 1] != ' ')
			nw++;
	}
		
}
nw++;

return (s);
}
