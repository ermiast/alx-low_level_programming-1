#include "holberton.h"
/**
 * rev_string - prints reversed string, followed by a new line
 * @s: pointer to the string to print
 * Return: void
*/

int lastChar(char *s)
{
	int len = 0;
	while (s[len] != '\0')
	len++;

	return (len);
}

void rev_string(char *s)
{

int len, i, half;
i = 0;
len = lastChar(s);

half = len / 2;
char temp;

while (half--)
{
	temp = s[len - i - 1];
	s[len - i - 1] = s[i];
	s[i] = temp;
	i++;
}

}
