#include <stdio.h>
/**
 * rev_string - prints reversed string, followed by a new line
 * @s: pointer to the string to print
 * Return: void
*/

void rev_string(char *s)
{

int len, i, half;
char temp;

for (len = 0; s[len] != '\0'; len++)
{
}

i = 0;

half = len / 2;
len = len - 1;


while (half-- != 0)
{
	temp = s[len - i];
    putchar(temp);
	s[len - i]='4';
	s[i] = temp;
 
	i++;
}

}

int main (){

char str[] = "123456";
  rev_string(str);
  return (0);
}