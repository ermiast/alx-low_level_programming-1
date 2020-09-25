#include <stdio.h>
#include <math.h>
/**
 * main - prime numbers
 *
 * Return: Always 0.
 */
int main(void)
{

unsigned int long n = 612852475143, a = 2;

while (a < (int) sqrt(n))
{

	if (n % a == 0)
	{
		n = n / a;
		a = 1;
	}
	a++;

}

printf("%lu \n", n);

return (0);
}
