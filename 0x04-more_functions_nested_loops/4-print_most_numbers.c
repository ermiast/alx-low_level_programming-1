#include "holberton.h"

/**
 * print_most_numbers - prints most numbers
 * Return:0
 */

void print_most_numbers(void)
{
	for (char n = '0'; n <= '9'; n++)
	{
		if (n != '2' && n != '4')
		{
			_putchar(n);
		}

	}
	_putchar('\n');

}
