#include "holberton.h"

/**
 * is_palindrome - determine if the string is a palindrome.
 * @s: string
 * Return: 1 on success.
 */

int is_palindrome(char *s)
{

int length = _strlen_recursion(s);
int inicio = 0;

if (length == 0)
{
return (1);
}

return (palindrome_calculation(s, inicio, length));
}


/**
 * palindrome_calculation - determine if the string is a palindrome.
 * @s: string
 * @n: length of string
 * @i: counter that starts from 1rst position of s
 * Return: 1 on success.
 */

int palindrome_calculation(char *s, int i, int n)
{

if (s[i] != s[n - 1])
{
return (0);
}

if (i >= n - 1)
{
return (1);
}

return (palindrome_calculation(s, i + 1, n - 1));

}

/**
 * _strlen_recursion - prints a string, followed by a new line.
 * @s: string
 * Return: lenght c.
 */

int _strlen_recursion(char *s)
{

if (*s == '\0')
{

return (0);

}

return (1 + _strlen_recursion(s + 1));

}
