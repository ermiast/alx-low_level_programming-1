#include "holberton.h"
/**
 * rev_string - prints reversed string, followed by a new line
 * @s: pointer to the string to print
 * Return: void
*/

void reverse_array(int *a, int n)
{

int i, half;
//char temp;

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
