#include <stdio.h>
/**
 *main - prints lower case characters in reverse, followed by a new line, using putchar
*Return: 0
*/

int main(void)
{

int c = 'z';
while (c>='a')
{
    putchar(c);
    c--;
}
putchar('\n');
return(0);
}
