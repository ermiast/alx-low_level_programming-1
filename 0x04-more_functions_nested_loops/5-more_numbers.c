#include "holberton.h"

/**
 * more_numbers - prints more numbers
 * Return:0
 */

void more_numbers(void)
{
	char n;
	int i = 0;

	while (i < 10)
	{
		n = 0;
		while (n <= 14)
		{
			if (n < 9)
				_putchar('0' + n);
			else
			{
				_putchar('1');
				_putchar('0' + n % 10);
			}

			n++;

		}
		_putchar('\n');
		i++;
	}

}
