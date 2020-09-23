#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: computes and prints the sum of all the multiples of 3 or
 * 5 below 1024 (excluded), followed by a new line
 * Return: 0
 */
int main(void)
{
	unsigned long a = 0, b = 1;
	unsigned long next;

	for (int i = 0; i < 50; i++)
	{
		next = a + b;
		a = b;
		b = next;
		printf("%lu", next);

		if (i != 49)
		{
			printf(", ");
		}
	}
	putchar('\n');
	return (0);
}
