#include "main.h"

/**
  * _strpbrk - search a string for any sert of bytes
  * @s: source string
  * @accept: accepted characters
  *
  * Return: a string that matches a bytes
  */
char *_strpbrk(char *s, char *accept)
{
	int x = 0, y;

	while (s[x])
	{
		y = 0;

		while (accept[y])
		{
			if (s[x] == accept[y])
			{
				s += x;
				return (s);
			}
			y++;
		}
		x++;
	}
}
