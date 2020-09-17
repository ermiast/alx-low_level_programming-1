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
	for (char i = 0; i < 26; i++)
	{
		putc(i+97, stdout);
	}
	putc('\n', stdout);
	return (0);
}
