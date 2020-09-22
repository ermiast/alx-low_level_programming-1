#include "holberton.h"

/**
 * main - Entry point
 * Return:0
 */

int main(void)
{

	char c[10] = "Holberton\n";

	for (int i = 0; c[i] != '\0'; i++)
	{
		_putchar(c[i]);
	}
	/*_putchar('\n');*/

	return (0);
}
