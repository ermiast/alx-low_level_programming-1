#include "holberton.h"

/**
 * print_numbers - prints numbers
 * Return:0
 */

void print_numbers(void)
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
