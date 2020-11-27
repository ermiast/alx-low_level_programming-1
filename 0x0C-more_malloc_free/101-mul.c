#include "holberton.h"

/**
 * _puts - prints a string, followed by a new line,
 * @str: pointer to the string to print
 * Return: void
*/


void _puts(char *str)
{
int i = 0;
while (str[i])
{
	_putchar(str[i]);
	i++;
}
_putchar('\n');
}

/**
 * _atoi - convert a string to an integer.
 * @s: char type string
 * Return: integer converted
 */

int _atoi(const char *s)
{
	int sign = 1, resp = 0, firstNum;

	for (firstNum = 0; !(s[firstNum] >= 48 && s[firstNum] <= 57); firstNum++)
	{
		if (s[firstNum] == '-')
		{
			sign *= -1;
		}
	}

	for (int i = firstNum; s[i] >= 48 && s[i] <= 57; i++)
	{
		resp *= 10;
		resp += (s[i] - 48);
	}

	return (sign * resp);
}

/**
 * print_int - prints an integer.
 * @arg: argument
 * Return: 0
 */

void print_int(int n)
{

unsigned int divisor = 1, i, resp;

for (i = 0; n / divisor > 9; i++, divisor *= 10)
;

for (; divisor >= 1; n %= divisor, divisor /= 10)
{
	resp = n / divisor;
	_putchar('0' + resp);
}

}

/**
 * main - print the result of the multiplication, followed by a new line
 * @argc: int
 * @argv: list
 * Return: 0
 */

int main(int argc, char const *argv[])
{
(void)argc;

if (argc != 3)
{
	_puts("Error\n");
	exit(98);
}
print_int(_atoi(argv[1]) * _atoi(argv[2]));
_putchar('\n');

return (0);
}
