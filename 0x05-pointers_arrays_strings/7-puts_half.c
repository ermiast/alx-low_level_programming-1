#include "holberton.h"
/**
 * _puts2 - prints a string, followed by a new line,
 * @str: pointer to the string to print
 * Return: void
*/

void puts_half(char *str)
{
int len = 0;
while (str[len])
	len++;

int i = (len + 1) / 2;

while (i != len)
{
	_putchar(str[i]);
	i++;
}
_putchar('\n');
}

