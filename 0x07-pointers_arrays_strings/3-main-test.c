#include "holberton.h"
#include <stdio.h>

unsigned int _strspn(char *s, char *accept)
{
    int i, j = 0, cmpt = 0;

    for (i = 0; s[i] >= '\0'; i++)
    {
        for (j = 0; accept[j] != '\0'; j++)
        {
            if (accept[j] == s[i])
            {
                cmpt++;
                break;
            }
        }
        if (accept == '\0')
        {
            break;
        }
    }
    return (cmpt);
}

