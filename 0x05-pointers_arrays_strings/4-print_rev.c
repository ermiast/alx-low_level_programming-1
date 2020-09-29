#include "holberton.h"
/**
 * print_rev - prints reversed string, followed by a new line
 * @s: pointer to the string to print
 * Return: void
*/

void print_rev(char *s)
{
int i = sizeof(s) / sizeof(s[0]) - 1;
while (i)
{
	_putchar(s[i]);
	i--;
}
_putchar('\n');

}
