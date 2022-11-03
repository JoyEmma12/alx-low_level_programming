#include "main.h"

/**
  * _strspn - get length of a prefix substring
  * @s: source string
  * @accept: accept string
  *
  * Return: number of bytes in the intial segment
  */
unsigned int _strspn(char *s, char *accept)
{
	int x = 0, y = 0, z;

	while (accept[x])
	{
		z = 0;

		while (s[z] != 32)
		{
			if (accept[x] == s[z])
			{
				y++;
			}
			z++;
		}
		x++;
	}
	return (y);
}
