#include "holberton.h"
/**
 * swap_int - swap variable values
 * @a: pointer 1
 * @b: pointer 2
 * Return: void
*/

void swap_int(int *a, int *b)
{

int c = *a;
*b = *a;
*a = c;

}
