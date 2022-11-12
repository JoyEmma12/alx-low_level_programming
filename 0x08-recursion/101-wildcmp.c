#include "main.h"

/**
  * wildcmp - compares two string
  * @s1: the first string to be checked
  * @s2: the second string to be checked
  *
  * Return: integer value
  */
int wildcmp(char *s1, char *s2)
{
	if (s1 < s2)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
