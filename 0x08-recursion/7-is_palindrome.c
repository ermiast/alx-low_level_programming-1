#include "holberton.h"
#include <stdio.h>
/**
 * is_palindrome - check if a string is a palindrome
 * @s: string to check
 * Return: 0 or 1
 */

int last_index(char *);

int is_palindrome(char *s)
{
return (check(s, 0, last_index(s) - 1));
}

/**
 * check - checker for the palindrome
 * @s: string
 * @start: int moves from right to left
 * @end: int moves from left to right
 * Return: 0 or 1
 */

int check(char *s, int start, int end)
{

if (start == end - 1 || start == end)
	return (1);
else if (s[start] != s[end])
	return (0);
else
	return (check(s, start + 1, end - 1));
}

/**
 * last_index - returns the last index of a string (counts the null char)
 * @s: pointer the string
 * Return: int
 */

int last_index(char *s)
{
int n = 0;

if (*s > '\0')
	n += last_index(s + 1) + 1;

return (n);
}
