#include "holberton.h"
/**
 * *string_toupper - capitalize a string
 * @*: pointer
 * Return: capitalzied string
*/

char *string_toupper(char *str)
{
for (int i = 0; str[i] != '\0'; i++)
{
	if (str[i] <= 'z' && str[i] >= 'a')
	{
		str[i] -= ('a' - 'A');
	}
}
return (str);
}
