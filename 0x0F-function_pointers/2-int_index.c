#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array of integers
 * @size: size of array
 * @cmp: function pointer
 * Return: index of first element that matches with `cmp`, or -1 if none found
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = size;

	if (size < 1 || array == NULL || cmp == NULL)
		return (-1);

	while (size--)
	{
		if (cmp(array[i - size]))
			return (i - size);
	}

	return (-1);
}
