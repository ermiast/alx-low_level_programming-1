#include "holberton.h"
#include <stdio.h>
/**
 * print_number - prints numbers
 * @n: number to be printed
 * Return:void
 */

void print_number(int n)
{

	/*char c;*/
	int d = 1, i;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	for (i = 0; n / d != 0; i++)
	{
		d *= 10;
	}
	d = d / 10;

	for (int ii = 0; ii < i; ii++)
	{
		_putchar('0' + n / d);
		n = n - (n / d) * d;
		d = d / 10;
	}

	if (i == 0)
		_putchar('0' + n);

}
