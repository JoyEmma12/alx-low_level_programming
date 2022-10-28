#include "main.h"
#include <stdio.h>

/**
  * cap_string - ....
  * @s: ...
  *
  * Return: char value
  */
char *cap_string(char *s)
{
	int x = 0, i;
	int caps = 13;
	char spc[] = {32, '\t', '\n', ',', '.', '?', '"', '(', ')', '{', '}'};

	while (s[x])
	{
		i = 0;

		while (i < caps)
		{
		 if ((x == 0 || s[x - 1] == spc[i]) && (s[x] >= 97 && s[x] <= 122))
					s[x] -= 32;

					i++;
					}
					x++;
					}
					return (s);
					}
