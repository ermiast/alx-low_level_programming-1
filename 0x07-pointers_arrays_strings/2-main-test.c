#include "holberton.h"
#include <stdio.h>

char *_strchr(char *s, char c)
{
    char *ptr;
    int i;

    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == c)
        {
            return (s + i); 
        }
    }
    return ('\0');
    
}

int main ()
{

    char *s = "hello";
    char *f;

    f = _strchr(s, 'l');

    if (f != NULL)
    {
        printf("%s\n", f);
    }
    return (0);

}