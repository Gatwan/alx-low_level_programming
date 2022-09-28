#include "main.h"
/**
*palindromefn - check if a string is a palindrome
*@a: first integer
*@s: pointer to a string
*@strlen: length of the string
*@b: last integer
*Return: 1 if palindrome else 0
*/
int palindromefn(int a, char *s, int strlen, int b)
{
	if (a >= strlen)
	{
		return (1);
	}
	else if (s[a] != s[b])
	{
		return (0);
	}
	else
	{
		return (palindromefn(++a, s, strlen, --b));
	}
}
/**
*_strlen_recursion - calculates the length of a string
*@s: pointer to a string
*Return: length of the string
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(++s));
	}
}
/**
*is_palindrome - confirms if string is palindrome
*@s: pointer to string
*Return: 1 if palindrome else 0
*/
int is_palindrome(char *s)
{
	return (palindromefn(0, s, _strlen_recursion(s), (_strlen_recursion(s) - 1)));
}
