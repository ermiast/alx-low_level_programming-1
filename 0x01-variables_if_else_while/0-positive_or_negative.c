
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Get a random number and check its last digit, compare it with 5
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n%10 > 5)
		printf("Last digit of %i is and is greater than 5\n", n);
	else if (n%10 == 0)
		printf("Last digit of %i is 0\n", n);
	else if (n%10 < 6)
		printf("Last digit of %i is less than 6 and not 0\n", n);

	return (0);
}
