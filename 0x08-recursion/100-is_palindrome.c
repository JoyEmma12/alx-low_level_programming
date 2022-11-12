#include "main.h"

/**
  * is_palindrome - return if a string is palindrome
  * @s: the string to be checked
  *
  * Return: integer value
  */
int is_palindrome(char *s)
{
	if (*s == '0')
	{
		s++;
		return (1);
	}
	else
	{
		return (0);
	}
	return (is_palindrome(s));
}
