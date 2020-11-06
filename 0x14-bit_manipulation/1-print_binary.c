#include "holberton.h"
#include <stdio.h>
/**
 * print_binary - prints decimal to binary
 * Description: first, finds the biggest exponent for 2, then go down
 * to find the smaller values
 * @n: decimal number
 */

void print_binary(unsigned long int n)
{
int i, k, andmask;
int firstOne = 0;

for (i = 15 ; i >= 0 ; i--)
{
andmask = 1 << i;
k = n & andmask;

if (k != 0 && firstOne == 0)
	firstOne = 1;

if (firstOne != 0)
	k == 0 ? _putchar('0') : _putchar('1');
}
if (firstOne == 0)
	_putchar('0');
}
