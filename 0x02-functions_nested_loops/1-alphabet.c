#include <stdio.h>

/**
 * print_alphabet - Entry point
 * Return:0
 */

void print_alphabet(void);
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	return (void);

}
