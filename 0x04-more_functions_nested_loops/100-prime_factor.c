#include <stdio.h>

/**
 * main - prime numbers
 *
 * Return: Always 0.
 */
int main(void)
{

unsigned int long n = 612852475143;

for (unsigned int long a = 2; a < n; a++)
{

	if (n % a == 0)
	{
		n = n / a;
	}
}

printf("%lu \n", n);

return (0);
}
