#include <stdio.h>

/**
 * print_alphabet - Entry point
 * Return:0
 */

void print_alphabet_x10(void);
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	c = 'A';

	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}

	return (void);

}
