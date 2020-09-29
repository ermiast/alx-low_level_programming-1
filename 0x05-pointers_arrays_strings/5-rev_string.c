#include "holberton.h"
/**
 * rev_string - prints reversed string, followed by a new line
 * @s: pointer to the string to print
 * Return: void
*/

void rev_string(char *s)
{

int len = 0, i = 0, half;

while (s[len])
	len++;

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
