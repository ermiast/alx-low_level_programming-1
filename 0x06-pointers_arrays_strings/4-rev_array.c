#include "holberton.h"
/**
 * reverse_array - reverse a int array
 * @a: pointer
 * @n: array length
 * Return: void
*/

void reverse_array(int *a, int n)
{

int i, half;
i = 0;

half = n / 2;
n--;
while (half--)
{
	a[n - i] += a[i];
	a[i] = a[n - i] - a[i];
	a[n - i] = a[n - i] - a[i];
	i++;
}

}
