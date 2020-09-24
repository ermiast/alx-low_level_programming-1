#include "holberton.h"

/**
 * print_line - check for a digit
 * @n : number of _ to be printed
 * Return:void
 */

void print_line(int n)
{

	int i = 0;

	while (i < n && n > 0)
	{
		for (int ii = 0; ii < i; ii++)
		{
			_putchar(' ');
		}

		_putchar('\\');
		_putchar('\n');
		i++;
	}
	_putchar('\n');

}
