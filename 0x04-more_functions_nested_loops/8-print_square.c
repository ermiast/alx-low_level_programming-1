#include "holberton.h"

/**
 * print_square - check for a digit
 * @n : number of _ to be printed
 * Return:void
 */

void print_square(int n)
{

	int i = 0;

	while (i < n && n > 0)
	{
		for (int ii = 0; ii < n; ii++)
		{
			_putchar('#');
		}

		_putchar('\n');
		i++;
	}
	if (i != 0)
		_putchar('\n');

}
