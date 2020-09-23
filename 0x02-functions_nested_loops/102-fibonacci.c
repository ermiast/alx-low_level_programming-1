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
	int a = 0, b = 1, next;

	for (int i = 0; i < 50; i++)
	{
		next = a + b;
		a = b;
		b = next;
		printf("%d", next);

		if (i != 49)
		{
			printf(", ");
		}
	}
	putchar('\n');
	return (0);
}
