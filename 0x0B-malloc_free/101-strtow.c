#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * **strtow - splits a string into two words
  * @str: the string to be splited
  *
  * Return: the splited string
  */
char **strtow(char *str)
{
	int i = 0, j = 0;
	char *s;

	if (str == NULL || str == "")
		return (NULL);

	while (str[i] > NULL)
	{
		str[i] = s[i];
		i++;
	}
	if (str[j] < NULL)
	{
		j--;
	}
	return (NULL);
}
