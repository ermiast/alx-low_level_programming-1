#include "holberton.h"

/**
 * print_line - check for a digit
 * @n : number of _ to be printed
 * Return:0 or 1
 */

void print_line(int n)
{

	for (int i = 0; i < n && n > 0; i++)
	{
		_putchar('_');
	}

	_putchar('\n');

}
