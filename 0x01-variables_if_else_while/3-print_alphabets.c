#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main block
 * Description:  prints the alphabet in lowercase,
 * and then in uppercase, followed by a new line.
 * Return: 0
 */
int main(void)
{
	int starts[2] = {97, 65};

	for (int k = 0; k < 2; k++)
	{
		for (char i = 0; i < 26; i++)
		{
			putchar(i + starts[k]);
		}
	}

	putchar('\n');
	return (0);
}
