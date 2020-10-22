#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - performs simple operations
 * @argc: argument count
 * @argv: terms and operators
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int (*calculate)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	calculate = get_op_func(argv[2]);
	if (calculate == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", calculate(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
