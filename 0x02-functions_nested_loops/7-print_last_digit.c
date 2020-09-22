#include "holberton.h"

/**
 * print_last_digit - return last digit
 * @n : number to check
 * Return:0 or 1
 */

int print_last_digit(int n)
{

n = _abs(n);

return (n % 10);

}
