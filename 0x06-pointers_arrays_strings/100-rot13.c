#include "main.h"
#include <stdio.h>

/**
  * rot13 - ...
  * @s: ...
  *
  * Return: ...
  */
char *rot13(char *s)
{
	int x = 0;

	while (s[x])
	{
		while ((s[x] >= 'a' && s[x] <= 'z') || (s[x] >= 'A' && s[x] <= 'Z'))
		{
			if ((s[x] > 'm' && s[x] <= 'z') || (s[x] > 'M' && s[x] <= 'Z'))
			{
				s[x] -= 13;
				break;
			}
			s[x] += 13;
			break;
		}
		x++;
	}
	return (s);
}
