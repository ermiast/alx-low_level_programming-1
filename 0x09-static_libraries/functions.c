#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _islower - check for lower case letter
 * @c : character to check the case
 * Return:0 or 1
 */

int _islower(int c)
{
	return (c >= 97 && c <= 122);

}

/**
 * _isalpha - check for lower case letter
 * @c : character to check
 * Return:0 or 1
 */

int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));

}

/**
 * _abs - return abs value
 * @n : number to check
 * Return:0 or 1
 */

int _abs(int n)
{

return (n >= 0 ? n : n * -1);

}

/**
 * _isupper - check for upper case letter
 * @c : character to check the case
 * Return:0 or 1
 */

int _isupper(int c)
{
	return (c >= 65 && c <= 90);

}
/**
 * _isdigit - check for a digit
 * @c : character to check
 * Return:0 or 1
 */

int _isdigit(int c)
{
	return (c >= 48 && c <= 57);

}

/**
 * _strlen - find the length of a string
 * @s: pointer to the string to check
 * Return: void
*/

int _strlen(char *s)
{
int i = 0;
while (s[i])
	i++;

return (i);
}
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
 * *_strcpy -  copies the string pointed to by src
 * @dest: char type string
 * @src: char type string
 * Description: Copy the string pointed to by pointer `src` to
 * the buffer pointed to by `dest`
 * Return: Pointer to `dest`
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}

/**
 * _atoi - Convert a string to integer.
 * @s: char array string
 * Return: first integer found in string
 */

int _atoi(char *s)
{
	int i;
	int h, p;

	h = 0;
	p = -1;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			p *= -1;

		if (s[i] > 47 && s[i] < 58)
		{
			if (h < 0)
				h = (h * 10) - (s[i] - '0');
			else
				h = (s[i] - '0') * -1;

			if (s[i + 1] < 48 || s[i + 1] > 57)
				break;
		}
	}
	if (p < 0)
		h *= -1;

	return (h);
}

/**
 * *_strcat - concatenates two strings
 * @dest: pointer destination
 * @src: pointer source
 * Return: void
*/

char *_strcat(char *dest, char *src)
{
int a = -1, i;
for (i = 0; dest[i] != '\0'; i++)
;

do {
	a++;
	dest[i] = src[a];
	i++;
} while (src[a] != '\0');

return (dest);
}

/**
 * *_strncat - concatenates n bytes of two strings
 * @dest: pointer destination
 * @src: pointer source
 * @n: number of bytes
 * Return: void
*/

char *_strncat(char *dest, char *src, int n)
{

int dest_len, i;
for (dest_len = 0; dest[dest_len] != '\0'; dest_len++)
;

for (i = 0; i < n && src[i] != '\0'; i++)
	dest[dest_len + i] = src[i];

/*should end with a end of string char*/
dest[dest_len + i] = '\0';

return (dest);
}
/**
 * *_strncpy - find the length of a string
 * @dest: pointer to the string
 * @src: pointer
 * @n: int
 * Return: destination
*/

char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
	dest[i] = src[i];

for ( ; i < n; i++)
	dest[i] = '\0';

return (dest);
}

/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: 0 if matching, and ns1 - ns2 if not matching
*/

int _strcmp(char *s1, char *s2)
{
int i;

for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
{
	if (s1[i] != s2[i])
	{
		return (s1[i] - s2[i]);
	}
}
return (0);
}


/**
 * *_memset - fills memory with a constant byte.
 * @s: pointer to put the constant
 * @b: constant
 * @n: max bytes to use
 * Return: s
 */


char *_memset(char *s, char b, unsigned int n)
{

for (unsigned int i = 0; n > 0 ; i++, n--)
{
	s[i] = b;
}

return (s);
}

/**
 * *_memcpy -  copies memory area from src to dest
 * @dest: destination
 * @src: source
 * @n: max bytes to use
 * Return: dest
 */


char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0 ; i++, n--)
	{
		dest[i] = src[i];
	}

	return (dest);
}


/**
 * *_strchr - fills memory with a constant byte.
 * @s: pointer to put the constant
 * @c: constant
 * Return: s
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'  ; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}

	return ('\0');
}

/**
 * *_strspn - description
 * @s: string
 * @accept: pointer
 * Return: int
 */

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
        if (*accept == '\0')
            break;
    }
    return (cmpt);
}


/**
 * _strpbrk - Search a string for any of a set of bytes.
 * @s: string
 * @accept: string to match
 * Return: Pointer to the byte in `s` that matches one of the bytes in `accept`
 * or NULL if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *p;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				p = &s[i];
				return (p);
			}
			j++;
		}
		i++;
	}

	return (0);
}

/**
 * *_strstr - description
 * @haystack: string
 * @needle: pointer
 * Return: pointer
 */


char *_strstr(char *haystack, char *needle)
{
int i, j;

for (i = 0; haystack[i] > '\0'; i++)
{
	for (j = i; haystack[j] > '\0' && needle[j - i] > '\0'; j++)
	{
		if (haystack[j] != needle[j - i])
		{
			break;
		}
	}
	if (needle[j - i] == '\0')
	{
		return (haystack + i);
	}
}
return (0);
}
