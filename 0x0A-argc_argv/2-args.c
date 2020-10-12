#include <stdio.h>

/**
 * main - prints the number of arguments passed into the program
 * @argc: int
 * @argv: list
 * Return: 0
 */

int main(int argc, char const *argv[])
{
int i = 0;
if (argc != 3)
{
	printf("Error\n");
	return (1);
}

while (argc--)
{
	printf("%s\n", argv[i]);
	i++;
}

return (0);
}
