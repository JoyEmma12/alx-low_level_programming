#include "main.h"

/**
  * _strstr - locate a substring
  * @needle: the string to find
  * @haystack: the string to search
  *
  * Return: a pointer to the beginning of the located substring
  */
char *_strstr(char *haystack, char *needle)
{
	int x = 0, y = 0;

	while (haystack[x])
	{
		while (needle[y])
		{
			if (haystack[x + y] != needle[y])
			{
				break;
			}
			y++;
		}
		if (needle[y] == '\0')
		{
			return (haystack + x);
		}
		x++;
	}
	return ('\0');
	}

