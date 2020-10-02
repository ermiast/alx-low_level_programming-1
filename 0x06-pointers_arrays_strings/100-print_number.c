#include "holberton.h"

/**
 * print_number - prints an integer.
 * @n: integer
 * Return: void
 */

/**
 * 
252

integer / place value
252/100  = 2

252 - 2 * 100 = 52
check if the last response has more than 1 digits
	If so, go back to step one, with this new value of n
	if not, print it.
	
End

# the loop restarts
100/10
52 / 10 = 5
52 - 50 = 2

*/
void print_number(int n)
{
int divisor = 1, i, resp;

if (n < 0)
{
	_putchar('-');
	n *= -1;
}

for (i = 0; n / divisor > 9; i++)
{
	divisor *= 10;
}

for (; divisor >= 10; divisor /= 10)
{
	resp = n / divisor;
	_putchar('0' + resp);
	n = n - resp * divisor;
}
_putchar('0' + n);

}
