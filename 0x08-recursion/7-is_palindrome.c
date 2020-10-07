#include "holberton.h"
#include <stdio.h>
/**
 * is_palindrome - description
 * @a: 2d array of int types
 * @size: size of array (square)
 */

int is_palindrome(char *s)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i];
		sum2 += a[size - i - 1];
		a += size;
	}
	printf("%d, ", sum1);
	printf("%d\n", sum2);
}
