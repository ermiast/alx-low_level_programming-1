#include <stdlib.h>
/**
 * *argstostr - description
 * @ac: int
 * @av: arguments
 * Return: string
 */

char *argstostr(int ac, char **av)
{
int i = 0, nc = 0, j = 0, cmpt = 0;
char *s;

if (ac == 0 || av == NULL)
	return (NULL);

for (; i < ac; i++)
{
	for (; av[i][j] != '\0'; j++)
		nc++;
	nc++;
}

s = malloc(ac * (sizeof(*s) * nc));

for (i = 0; i < ac; i++)
{
	for (j = 0; av[i][j] != '\0'; j++, cmpt++)
		s[cmpt] = av[i][j];

	s[cmpt] = '\n';
	cmpt++;
}

return (s);
}
