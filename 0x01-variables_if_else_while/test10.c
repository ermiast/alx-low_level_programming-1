#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 * Return: 0
 */
int main(void)
{
	int a = 0;
	int b;

    while (a < 10)
    {
        b=0;
        while (b<10)
        {
            putchar('0' + a);
            putchar('0' + b);
            
            if (!(a == 9 && b == 9))
            {
                putchar(',');
                putchar(' ');
            }

            b++;
        }
        
        a++;
    }
    
	return (0);
}
