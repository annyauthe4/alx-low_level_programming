#include "main.h"

/**
 * _strlen_recursion - prints the length of a string
 * @s: character pointer
 *
 * Return: int
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * palindrome_ch - checks palindrome
 * @s: the string to check
 * @start: the beginning character
 * @end: the end of the string
 *
 * Return: 1 or 0
 */
int palindrome_ch(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	else if (s[start] != s[end])
		return (0);
	else
		return (palindrome_ch(s, start + 1, end - 1));
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to check
 *
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);
	if (len <= 1)
		return (1);
	else
		return (palindrome_ch(s, 0, len - 1));
}
