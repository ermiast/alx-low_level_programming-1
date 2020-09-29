#include "holberton.h"
/**
 * _puts2 - prints a string, followed by a new line,
 * @str: pointer to the string to print
 * Return: void
*/

void _puts_half(char *str)
{
int i = 0;
while (str[(i + 1) / 2])
{
	_putchar(str[i]);
	i++;
}
_putchar('\n');
}
