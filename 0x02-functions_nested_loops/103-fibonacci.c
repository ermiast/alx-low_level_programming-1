#include <stdio.h>
/**
 * main - main block
 * Description: computes and prints even fibonacci number < 4,000,000
 * 5 below 1024 (excluded), followed by a new line
 * Return: 0
 */
int main(void)
{
	int i = 0;
	unsigned long int a = 0, b = 1, next = 0;

	while (next < 4000000)
	{
		next = a + b;
		a = b;
		b = next;
		if (next % 2 == 0)
		{
			printf("%lu\n", next);
		}
		i++;
	}
	return (0);
}
