#include "holberton.h"
#include <stdio.h>
/**
 * is_palindrome - check if a string is a palindrome
 * @s: string to check
 * Return: 0 or 1
 */

int is_palindrome(char *s)
{
int end = _strlen_recursion(s) - 1;
return (check(s, 0, end));
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
{
	return (1);
}
else if (s[start] != s[end])
{
	return (0);
}
else
{
	return (check(s, start + 1, end - 1));
}
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: pointer the string
 * Return: int
 */

int _strlen_recursion(char *s)
{
int n = 0;

if (*s > '\0')
{
	n += _strlen_recursion(s + 1) + 1;
}

return (n);
}
